#ifndef KEYBOARD_DRIVER_H
#define KEYBOARD_DRIVER_H

#include <idtLoader.h>
#include <naiveConsole.h>
#include <lib.h>

void keyboard_handler();
char key_handler(char key);
uint64_t readBuffer(char* output, uint64_t count);

#endif 