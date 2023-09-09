#include<stdio.h>
#include "heater_time.h"
int main()
{
	unsigned char temp;
	printf("Enter temperature : ");
	scanf("%hhu",&temp);
	heater_time(temp);
	return 0;
}
