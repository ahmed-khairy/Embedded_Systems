/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/4/2023
*Session : c programming > session 1 > hello c > ASG_1-2
*Program function: how to set, clear or toggle a specific bit in any number
*Notes : number used here is easy to follow to understand the concept
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int result1,result2;
    unsigned short int x;
    //set bit number 4
    result1 = 5; //binary : 0101
    x=1<<4; //suppose to set bit number four which makes the number : 10101 means 21
    printf("%d\n",x);
    result2=result1|x;
    printf("set bit 4 in %d : %d\n",result1,result2);
    //clear bit number 2
    result1=7; //binary : 0111
    x=~(1<<2); //suppose to clear bit number two which makes the number : 0011 means 3
    result2=result1&x;
    printf("clear bit 2 in %d : %d\n",result1,result2);
    //toggle bit number 2
    result1=7; //binary : 0111
    x=1<<1; //suppose to toggle bit number 1 which makes the number : 0101 means 5
    result2=result1^x;
    printf("toggle bit 1 in %d : %d\n",result1,result2);
    return 0;
}
