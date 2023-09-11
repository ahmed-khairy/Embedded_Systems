#include <stdio.h>
void edit(char *x) {
	*x += 1;
	x += 1;
	*x = 0x5;
	x += 1;
	*x = 0x20;
	x += 1;
	*x = 0x80;

}

