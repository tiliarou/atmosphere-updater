#ifndef _UNZIP_H_
#define _UNZIP_H_

#define UP_PATCHES      0
#define UP_HEKATE       1
#define UP_APP          2
#define REBOOT_PAYLOAD  3

int unzip(const char *output, int cursor);

#endif