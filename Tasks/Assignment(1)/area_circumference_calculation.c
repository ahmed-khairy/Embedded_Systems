/*
 *Embedded systems software diploma
 *Author : Ahmed khairy
 *Date : 7/9/2023
 *Program program that reads the radius of a circle and calculates the area and circumference then prints the results.
 *Area = pi*r*r
 *circumference = 2*pi*r
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float rad, area, circum, pi = 22.0 / 7.0;
	printf("Radius : ");
	if (scanf("%f", &rad) == 1) {
		area = pi * rad * rad;
		circum = 2 * pi * rad;
		printf("Area of circle is : %0.1f\tCircumference is : %0.1f\n", area,
				circum);
	} else {
		printf("Invalid radius!\n");
	}
	return 0;
}
