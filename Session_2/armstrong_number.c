/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 9/4/2023
 *Session : c programming > session 2 > control flow > ASG_2-2
 *Program function: ask user to input number and check if the number is armstrong number
 *Notes : Armstrong number is a number that is equal to the sum of cubes of its digits
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, original_num, a, b, c=0, i, sum;
	printf("enter the number= ");
	scanf("%d", &number);
	original_num = number;
	for(i=1;i<=3;i++)
	{
		a = number % 10;
		b=a*a*a;
		c+=b;
		number/=10;
	}
	(c == original_num) ?
			printf("%d IS an Armstrong number", original_num) :
			printf("%d ISN'T an Armstrong number", original_num);
	return 0;
}
