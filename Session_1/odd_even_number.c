/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/4/2023
*Session : c programming > session 1 > hello c - data type > ASG_1-1
*Program function: check the entered number if it is even or odd
*Notes : don't use % operaotr
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int result;
    printf("Enter the number\n");
    scanf("%d",&number);
    (number&1==1)?
    printf("The number is odd = 1\nThe number is even = 0\n"):
    printf("The number is odd = 0\nThe number is even = 1\n");
    return 0;
}
