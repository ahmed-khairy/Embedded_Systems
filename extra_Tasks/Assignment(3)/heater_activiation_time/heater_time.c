#include <stdio.h>
void heater_time(unsigned char temp) {
	if (temp <= 30) {
		printf("required heating time = 7 mins.\n");
	} else if (temp > 30 && temp <= 60) {
		printf("required heating time = 5 mins.\n");
	} else if (temp > 60 && temp <= 90) {
		printf("required heating time = 3 mins.\n");
	} else if (temp > 90 && temp <= 100) {
		printf("required heating time = 1 mins.\n");
	} else {
		printf("Invalid input.\n");
	}
}
