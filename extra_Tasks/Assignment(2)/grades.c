/*
*Embedded systems software diploma
*Author : Ahmed khairy
*Date : 9/4/2023
*Session :
*Program function: taking the grade from the student and print the rank using switch case
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int grade;
    printf("Please enter your grade : ");
    //put scanf in condition if it returned the same numbers as input that would be right, else don't check
    if(scanf("%d",&grade)==1)
    {
        grade/=10;
        switch(grade)
        {
        case 10:
        case 9:
            printf("Congratulation, you got Excellent rank");
            break;
        case 8:
            printf("Congratulation, you got Very Good rank");
            break;
        case 7:
            printf("Congratulation, you got Good rank");
            break;
        case 6:
            printf("Congratulation, you have passed");
            break;
        case 5:
        default:
            printf("Sorry to inform that you have Failed");
            break;
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Enter valid number\n");
    }
}
