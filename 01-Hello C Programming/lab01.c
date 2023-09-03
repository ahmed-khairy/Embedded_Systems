
/* 
 *Embedded systems software diploma 
 *Author : Ahmed khairy 
 *Date :  
 *Session :  
 *Program function: 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int num1,num2;
    printf("Enter number1, number2\n");
    scanf("%d %d",&num1,&num2);
    printf("Number 1 : %d\n",num1);
    printf("Number 2 : %d\n",num2);
    printf("Sum : %d\n",num1+num2);
    printf("Subtraction : %d\n",num1-num2);
    printf("Multiplication : %d\n",num1*num2);
    printf("Division : %0.2f\n",(float)num1/num2);
    printf("Reminder of division : %d\n",num1%num2);

    return 0;
}
