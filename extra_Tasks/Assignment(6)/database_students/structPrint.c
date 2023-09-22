#include<stdio.h>
extern struct mark {
	int arabic;
	int english;
	int math;
	int science;
};
extern struct student {
	char name[10];
	int roll;
	struct mark marks;
};

void print(struct student *ptr) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("Name : %s\n", ptr[i].name);
		printf("Roll : %d\n", ptr[i].roll);
		printf("Arabic : %d\n", ptr[i].marks.arabic);
		printf("English : %d\n", ptr[i].marks.english);
		printf("Math : %d\n", ptr[i].marks.math);
		printf("Science : %d\n", ptr[i].marks.science);
		printf("\n");
	}
}
