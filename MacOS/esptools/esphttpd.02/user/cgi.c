/*
Some random cgi routines. Used in the LED example and the page that returns the entire
flash as a binary. Also handles the hit counter on the main page.
*/

/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Jeroen Domburg <jeroen@spritesmods.com> wrote this file. As long as you retain 
 * this notice you can do whatever you want with this stuff. If we meet some day, 
 * and you think this stuff is worth it, you can buy me a beer in return. 
 * ----------------------------------------------------------------------------
 */


#include <string.h>
#include <osapi.h>
#include "user_interface.h"
#include "mem.h"
#include "httpd.h"
#include "cgi.h"
#include "io.h"
#include <ip_addr.h>
#include "espmissingincludes.h"
#include "../include/httpdconfig.h"


//cause I can't be bothered to write an ioGetLed()
#define MAX_LED	2
static char currLedState[MAX_LED]={0,0};
static int relay_reverse=0;

//Cgi that get relay status, turns the relay on or off according to the cgi param in the url http://192.168.0.120/cgi-bin/relay.cgi?on|off|state
// http://192.168.0.120/cgi-bin/relay.cgi?state will print "ON" or "OFF" in http response
int ICACHE_FLASH_ATTR cgiRelay(HttpdConnData *connData ) {
	char buff[64];
        int i=0, len, j, state=0;
	
	os_strcpy(buff, "");
	if (connData->conn==NULL) {
		//Connection aborted. Clean up.
		return HTTPD_CGI_DONE;
	}

	if ( os_strncmp(connData->getArgs, "reverse", 7 )==0) {
		len=httpdFindArg(connData->getArgs, "reverse", buff, sizeof(buff));
		if (len > 0) {
                        i=atoi(buff);
                        //os_printf("reverse = %d\n", i);
                        if ( i > 1 || i < 0 ) i=0;
			relay_reverse=i;
                }
        	httpdStartResponse(connData, 200);
	}
	else
	if (os_strncmp(connData->getArgs, "state", 5 )==0) {
        	len=httpdFindArg(connData->getArgs, "state", buff, sizeof(buff));
        	if (len > 0) {
			i=atoi(buff);
                	//os_printf("state = %d\n", i);
			if ( i > MAX_LED || i < 0 ) i = 0;
        	}
		else i = 1;

		switch ( i ) {
		case 1: 
		case 2:
			if ( currLedState[i-1] == 0 )
				os_strcpy(buff, "OFF");
			else if ( currLedState[i-1] == 1 )
                        	os_strcpy(buff, "ON");
			break;
		default:
			os_strcpy(buff, "");
			for (j=0;j<MAX_LED;j++) {
				if ( currLedState[j] == 0 ) 
					os_strcat(buff, "OFF "); 
				else if ( currLedState[j] == 1 ) 
                        		os_strcat(buff, "ON "); 
				//os_printf("buff=%s, j=%d\n", buff, j);
			}	
			break;
		}

		//os_printf("buff=%s\n", buff);
        	httpdStartResponse(connData, 200);
        	httpdHeader(connData, "Content-Type", "application/bin");
        	httpdEndHeaders(connData);

		//os_printf("returning: %s, %d\n", buff, os_strlen(buff));
		httpdSend(connData, buff, os_strlen(buff));
        }
	else { 
		if (os_strncmp(connData->getArgs, "on", 2 )==0) {
        		len=httpdFindArg(connData->getArgs, "on", buff, sizeof(buff));
        		if (len>0) {
				i=atoi(buff);
                		//os_printf("on=%d\n", i);
				if ( i > MAX_LED || i < 0 ) i = 0;
        		}
			else i = 1;
			state=1;
		}
		else if (os_strncmp(connData->getArgs, "off", 3 )==0) {
        		len=httpdFindArg(connData->getArgs, "off", buff, sizeof(buff));
        		if (len>0) {
				i=atoi(buff);
                		//os_printf("off=%d\n", i);
				if ( i > MAX_LED || i < 0 ) i = 0;
        		}
			else i = 1;
                	state=0;
       		}
		else
			state=2; // reuse state variable for conditions not met above

		if ( state < 2 ) { 
			switch ( i ) {
			case 1: 
			case 2:
				currLedState[i-1]=state;
				ioLed(currLedState[i-1], i-1);
				break;
			default:
				for (j=0;j<MAX_LED;j++) {
					currLedState[j]=state;
					ioLed(currLedState[j], j);
				}	
			break;
			}
        		httpdStartResponse(connData, 200);
		}
		else
			httpdStartResponse(connData, 404);
	}

	return HTTPD_CGI_DONE;
}

#if 0
//Cgi that turns the LED on or off according to the 'led' param in the POST data
int ICACHE_FLASH_ATTR cgiLed(HttpdConnData *connData) {
        int len;
        char buff[1024];

        if (connData->conn==NULL) {
                //Connection aborted. Clean up.
                return HTTPD_CGI_DONE;
        }

        len=httpdFindArg(connData->post->buff, "led", buff, sizeof(buff));
        if (len!=0) {
                currLedState=atoi(buff);
                ioLed(currLedState);
        }

        httpdRedirect(connData, "led.tpl");
        return HTTPD_CGI_DONE;
}
#endif

//Template code for the led page.
int ICACHE_FLASH_ATTR tplLed(HttpdConnData *connData, char *token, void **arg) {
	char buff[128];
	if (token==NULL) return HTTPD_CGI_DONE;

	os_strcpy(buff, "Unknown");
	if (os_strcmp(token, "ledstate")==0) {
		if (currLedState) {
			os_strcpy(buff, "on");
		} else {
			os_strcpy(buff, "off");
		}
	}
	httpdSend(connData, buff, -1);
	return HTTPD_CGI_DONE;
}

static long hitCounter=0;

//Template code for the counter on the index page.
int ICACHE_FLASH_ATTR tplCounter(HttpdConnData *connData, char *token, void **arg) {
	char buff[128];
	if (token==NULL) return HTTPD_CGI_DONE;

	if (os_strcmp(token, "counter")==0) {
		hitCounter++;
		os_sprintf(buff, "%ld", hitCounter);
	}
	httpdSend(connData, buff, -1);
	return HTTPD_CGI_DONE;
}

