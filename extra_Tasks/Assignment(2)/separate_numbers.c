/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/9/2023
*Session :
*Program function: Enter any number then separate it to its primary digits
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number; //user number
    unsigned char reminder;   //the binary value bit by bit
    unsigned char counter=0;  //counter for number of bits
    int binary[8];  //resulted binary number
    unsigned char i;  //counter for printing result
    printf("Enter any decimal number : ");
    scanf("%d",&number);
    while(number>=1)
    {
        reminder=number%10;
        number/=10;
        binary[counter]=reminder;
        counter++;
//        printf("%hhu",reminder);
    }
    //loop for reorder binary number
    for(i =counter-1; i>=0; i--)
        printf("%d  ",binary[i]);
    printf("\n");
    return 0;
}
