/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/5/2023
 *Session :
 *Program function: ask user to input character and print out the selected character and the 
 * following characters to z, then print these letters again with small or captial depending on
 * the entered letter if it is small then converted to captial and vice versa.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch, i, diff;
	printf("Enter any character : ");
	scanf("%c", &ch);
	i = ch;
	if (ch > 64 && ch < 91) {
		diff = ch - 64;
		while (i < 91) {
			printf("%c", i);
			i++;
		}
		printf("\n");
		i = 96 + diff;
		while (i < 123) {
			printf("%c", i);
			i++;
		}
	} else if (ch > 96 && ch < 123) {
		diff = ch - 96;
		while (i < 123) {
			printf("%c", i);
			i++;
		}
		printf("\n");
		i = 64 + diff;
		while (i < 91) {
			printf("%c", i);
			i++;
		}
	}
	return 0;
}
