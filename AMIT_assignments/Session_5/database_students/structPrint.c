#include<stdio.h>
extern struct student {
	char name[10];
	int age;
	int degree;
	int section;
};

void print(struct student *ptr) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("Name : %s\n", ptr[i].name);
		printf("Age : %d\n", ptr[i].age);
		printf("Degree : %d\n", ptr[i].degree);
		printf("Section : %d\n", ptr[i].section);
		printf("\n");
	}
}
