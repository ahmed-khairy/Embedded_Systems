/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/4/2023
*Session :
*Program function: convert any decimal number to binary and print it on screen
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number; //user number
    int reminder;   //the binary value bit by bit
    int counter=0;  //counter for number of bits
    int binary[8];  //resulted binary number
    int i;  //counter for printing result
    printf("Enter any decimal number : ");
    scanf("%d",&number);
    while(number>=1)
    {
        reminder=number%2;
        number/=2;
        binary[counter]=reminder;
        counter++;
        //printf("%d",reminder);
    }
    //loop for reorder binary number
    for(i =counter-1; i>=0; i--)
        printf("%d",binary[i]);
    printf("\n");
    return 0;
}
