#ifndef LIB_H
#define LIB_H

#include <stdint.h>

void * memset(void * destination, int32_t character, uint64_t length);
void * memcpy(void * destination, const void * source, uint64_t length);
uint8_t getSeconds();
uint8_t getMinutes();
uint8_t getHours();
uint8_t getDay();
uint8_t getMonth();
uint8_t getYear();
char *cpuVendor(char *result);
uint8_t read_port(uint8_t key);


#endif