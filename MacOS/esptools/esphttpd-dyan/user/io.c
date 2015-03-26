
/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Jeroen Domburg <jeroen@spritesmods.com> wrote this file. As long as you retain 
 * this notice you can do whatever you want with this stuff. If we meet some day, 
 * and you think this stuff is worth it, you can buy me a beer in return. 
 * ----------------------------------------------------------------------------
 */


#include "c_types.h"
#include "user_interface.h"
#include "espconn.h"
#include "mem.h"
#include "osapi.h"
#include "gpio.h"
#include "espmissingincludes.h"
#include "io.h"

/*#define LEDGPIO 2 */
#define LEDGPIO 5
#define LED2GPIO 14
#define BTNGPIO 0
/*#define ALRMGPIO 4 */
#ifndef MAX_LED
#define MAX_LED 2
#endif

static int led[MAX_LED]={LEDGPIO,LED2GPIO};

static ETSTimer resetBtntimer;
/*static ETSTimer resetAlrmtimer; */

void ICACHE_FLASH_ATTR ioLed(int ena, int num) {
	//gpio_output_set is overkill. ToDo: use better mactos
	
	if (ena) {
		//if ( relay_reverse == 1 )
		//	gpio_output_set(0, (1<<led[num]), (1<<led[num]), 0); 
		//else
			gpio_output_set((1<<led[num]), 0, (1<<led[num]), 0);
	} else {
		//if ( relay_reverse == 1)
		//	gpio_output_set((1<<led[num]), 0, (1<<led[num]), 0);
		//else
			gpio_output_set(0, (1<<led[num]), (1<<led[num]), 0);
	}
}

static void ICACHE_FLASH_ATTR resetBtnTimerCb(void *arg) {
	static int resetCnt=0;
	if (!GPIO_INPUT_GET(BTNGPIO)) {
		resetCnt++;
	} else {
		if (resetCnt>=6) { //3 sec pressed
			wifi_station_disconnect();
			wifi_set_opmode(0x3); //reset to AP+STA mode
			os_printf("Reset to AP mode. Restarting system...\n");
			system_restart();
		}
		resetCnt=0;
	}
}

#if 0
static struct espconn clientConn;
static esp_tcp clientTcp;

static void ICACHE_FLASH_ATTR resetAlrmTimerCb(void *arg) {
	static int resetCnt=0;
	if (GPIO_INPUT_GET(ALRMGPIO)) {
		os_printf("Alarm GPIO4 is triggered: %d\n", resetCnt);
		resetCnt++;
		
	} else {
		resetCnt=0;
	}
}
#endif

void ioInit() {
	/*PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO4_U, FUNC_GPIO4); */
	/*PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U, FUNC_GPIO2); */
	PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO5_U, FUNC_GPIO5);
	PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTMS_U, FUNC_GPIO14);
	PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO0_U, FUNC_GPIO0);
	/* gpio_output_set(0, 0, (1<<LEDGPIO), (1<<BTNGPIO)|(1<<ALRMGPIO)); */
	gpio_output_set(0, 0, (1<<LEDGPIO)|(1<<LED2GPIO), (1<<BTNGPIO));
	os_timer_disarm(&resetBtntimer);
	os_timer_setfn(&resetBtntimer, resetBtnTimerCb, NULL);
	os_timer_arm(&resetBtntimer, 500, 1);
#if 0
	os_timer_disarm(&resetAlrmtimer);
	os_timer_setfn(&resetAlrmtimer, resetAlrmTimerCb, NULL);
	os_timer_arm(&resetAlrmtimer, 500, 1);

	clientConn.type=ESPCONN_TCP;
	clientConn.state=ESPCONN_NONE;
	/*clientTcp.local_port=port; */
	clientTcp.remote_port=25;  /* SMTP */
	clientConn.proto.tcp=&clientTcp;
#endif
	relay_reverse = 0;
}

