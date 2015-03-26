export PATH=/esptools/esp-open-sdk/xtensa-lx106-elf/bin:$PATH
export XTENSA_TOOLS_ROOT=/esptools/esp-open-sdk/xtensa-lx106-elf/bin/   # need / in the end in newer code of esphttpd
export SDK_BASE=/esptools/esp-open-sdk/esp_iot_sdk_v0.9.5/
export SDK_EXTRA_INCLUDES=${PWD}/esp_iot_sdk_novm_unpacked/usr/xtensa/XtDevTools/install/builds/RC-2010.1-win32/lx106/xtensa-elf/include/
#export ESPTOOL=/opt/Espressif/ESP8266_SDK/esptool-py/esptool.py  # don't set this, as it will conflict with esptool binary installed by esptool_0.0.2-1_i386.deb
export ESPPORT=/dev/ttyUSB0

