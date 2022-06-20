#include <stdio.h>
#include <conio.h>
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main()
{
    int player=1,i,choice;
    char mark;
    do
    {
        player = (player%2)?1:2;
        printf("Player %d,enter a number : ",player);
        mark =(player ==1) ? 'X' : 'O';

    } while (i==-1);
    
}