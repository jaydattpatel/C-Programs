// author: jaydattpatel
#include <stdio.h>
#include <conio.h>
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))
int main()
{
    int number;
    clear();         //used to clear consol screen
    printf("Enter your number in the box below\n"
    "+-----------------+\n"
    "|                 |\n"
    "+-----------------+\n");
    gotoxy(3, 2);       // set cursor position gotoxy(x,y). x=horizontal position(left-right), y=vertical position(up-down)
    scanf("%d", &number);
    gotoxy(5, 0);  
    printf("Sucess .");
    return 0;
}
