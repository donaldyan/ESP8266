#ifndef CGI_H
#define CGI_H

#include "httpd.h"

//int cgiLed(HttpdConnData *connData);
int cgiRelay(HttpdConnData *connData);
int tplLed(HttpdConnData *connData, char *token, void **arg);
int tplCounter(HttpdConnData *connData, char *token, void **arg); 

char relay_param[8];

#endif
