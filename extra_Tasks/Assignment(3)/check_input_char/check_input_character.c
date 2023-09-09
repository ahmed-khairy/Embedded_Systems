#include <stdio.h>
void check_input_character(char a) {
	if ((a >= 'a' && a <= 'z') || (a > 'A' && a < 'Z')) {
		printf("The character'%c' is alphabet\n", a);
	} else {
		printf("The character'%c' isn't alphabet\n", a);
	}
}
