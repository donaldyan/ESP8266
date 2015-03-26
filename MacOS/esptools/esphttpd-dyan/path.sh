export PATH=/opt/Espressif/crosstool-NG/builds/xtensa-lx106-elf/bin:$PATH
export XTENSA_TOOLS_ROOT=/opt/Espressif/crosstool-NG/builds/xtensa-lx106-elf/bin
export SDK_BASE=/opt/Espressif/ESP8266_SDK/esp_iot_sdk_v0.9.3/
export SDK_EXTRA_INCLUDES=${PWD}/esp_iot_sdk_novm_unpacked/usr/xtensa/XtDevTools/install/builds/RC-2010.1-win32/lx106/xtensa-elf/include/
#export ESPTOOL=/opt/Espressif/ESP8266_SDK/esptool-py/esptool.py  # don't set this, as it will conflict with esptool binary installed by esptool_0.0.2-1_i386.deb
export ESPPORT=/dev/ttyUSB0

