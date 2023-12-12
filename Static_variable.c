// author: jaydattpatel
#include <stdio.h>
int fun(int x,int y);
int main()
{   
    int x=30;
    static int y=50;
    for(int j=0;j<5;j++)
        {
            fun(x,y); 
            y++;
        }
    return 0;
}

int fun(int x,int y)
{
    int a=1;
    static int b = 10;
    y = 99;
    printf("\nx=%d \ty=%d \ta=%d \tb=%d",x,y,a,b);
    x++;y++;a++;b++;
}