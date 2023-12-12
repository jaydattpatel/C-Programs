// author: jaydattpatel
#include <stdio.h>
int a=50,b=60;

int main()
{   
    int a=10,b=20;
    printf("Enter a:%d\n",a);
    printf("Enter b:%d\n",b);
    {
        extern int a,b;     // here extern key word used to define as globle variables.
        printf("Enter extern a:%d\n", a);
        printf("Enter extern b:%d\n", b);

    }

    return 0;
}

