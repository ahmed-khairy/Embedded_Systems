#include<stdio.h>
extern int n;
void get_nth() {
	int i, num = 1;
	for (i = 1; i <= n; i++) {
		printf("%d ", num);
		num += 2;
	}
}
