/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/9/2023
 *Session :
 *Program function: check the entered character if it alphabet or not
 */

#include <stdio.h>
#include <stdlib.h>
#include "check_input_character.h"
int main() {
	char ch;
	printf("Enter any character : ");
	scanf("%c", &ch);
	check_input_character(ch);
	return 0;
}
