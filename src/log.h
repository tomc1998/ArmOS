/**
 *  \file This file defines some/a function(s) which log output in some way.
 */
#ifndef LOG_H
#define LOG_H

/**
 *  Prints a given string to the UART0 port. On qemu this is bound to STDOUT.
 *  @param str[in] The NUL terminated string to print.
 */
void print(char* str);

#endif


