#include "log.h"

void print(char* str) {
	while (*str) {
		*(volatile char*)0x101f1000 = *str;
		++str;
	}
}


