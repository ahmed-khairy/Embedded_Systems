#include <stdio.h>
void calculate(char op, int num1, int num2) {
	int result;
	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("Wrong operator");
		break;
	}
	printf("%d %c %d = %d", num1, op, num2, result);
}
