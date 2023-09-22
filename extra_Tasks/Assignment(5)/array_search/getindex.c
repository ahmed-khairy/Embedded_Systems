#include<stdio.h>
void getindex(int arr[], int arr_size, int num) {
	int i, x = -1;
	for (i = 0; i < arr_size; i++) {
		if (num == arr[i]) {
			x = i;
			break;
		}
	}
	if (x != -1)
		printf("The first occurence happend in index Number %d", x);
	else
		printf("-1", x);
	printf("\n");
	printf("\n");
}
