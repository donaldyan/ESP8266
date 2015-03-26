#ifndef CGI_H
#define CGI_H

#include "httpd.h"

int cgiRelay(HttpdConnData *connData);
void tplLed(HttpdConnData *connData, char *token, void **arg);
int cgiReadFlash(HttpdConnData *connData);
void tplCounter(HttpdConnData *connData, char *token, void **arg);

char relay_param[8];

#endif
