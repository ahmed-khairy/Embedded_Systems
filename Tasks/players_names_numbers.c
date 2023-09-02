#include <stdio.h>
#include <stdlib.h>
/*
*choose two best players
*what is the number of each player
*take those two numbers and put them into two variables
*choose first letter of the player name and put into variable
*print player name(txt) and number(variable) and his club(txt)
*print subtraction, division,  of player number one and player number two as a floating point numbers
*my favorite player is ... and his first character is ... from variables
*adding subtraction division multiplication between each player and his number
*screen shot for the output and the source code
*/


int main()
{
    unsigned char player1Number=27;
    unsigned char player2Number=16;
    char player1Char='A';
    char player2Char='H';

    printf("Player Ahmed and his Number is %d from Manchester club\n",player1Number);

    printf("The subtraction of player1 number(%d)-player2 number(%d) = %0.2f\n\
           The division of player1(%d)/player2(%d) = %0.2f\n",player1Number,player2Number, \
           (float)player1Number-player2Number,player1Number,player2Number,(float)player1Number/player2Number);

    printf("My favorite player is Ahmed and his first character is %c\n",player1Char);

    printf("Sum of player1 first character(%d) and his number (%d) is : %d\n",player1Char,player1Number,player1Char+player1Number);
    printf("Sum of player2 first character(%d) and his number (%d) is : %d\n",player2Char,player2Number,player2Char+player2Number);

    printf("Subtraction of player1 first character(%d) and his number (%d) is : %0.2f\n",player1Char,player1Number,(float)player1Char-player1Number);
    printf("Subtraction of player2 first character(%d) and his number (%d) is : %0.2f\n",player2Char,player2Number,(float)player2Char-player2Number);

    printf("Division of player1 first character(%d) and his number (%d) is : %0.2f\n",player1Char,player1Number,(float)player1Char/player1Number);
    printf("Division of player2 first character(%d) and his number (%d) is : %0.2f\n",player2Char,player2Number,(float)player2Char/player2Number);

    printf("Multiplication of player1 first character(%d) and his number (%d) is : %d\n",player1Char,player1Number,player1Char*player1Number);
    printf("Multiplication of player2 first character(%d) and his number (%d) is : %d\n",player2Char,player2Number,player2Char*player2Number);
    return 0;
}
