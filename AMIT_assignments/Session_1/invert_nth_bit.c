/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/4/2023
*Session : c programming > session 1 > hello c > ASG_1-2
*Program function: how to toggle a specific bit(user defined) in any number(user defined)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,nth,result,x;
    printf("Enter any number: ");
    scanf("%d",&number);
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d",&nth);

    x=1<<nth;

    result=number^x;

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n",nth,number);
    printf("Number after toggling %d bit: %d (in decimal)\n\n",nth,result);
    return 0;
}
