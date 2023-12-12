// Check number is Armstrong number or not
// check value 153 is aemstrong number
// 153 = (1^3)+(5^3)+(3^3)
// author: jaydattpatel
#include<stdio.h>
#define cube(a) (a*a*a)

int main()
{
    int x,num,a,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    x = num;
    while(x!=0)
    {
        a = x%10;
        sum = sum + cube(a);
        x = x/10;
    }
    if(num == sum)
        printf("Number is Armstrong number");
    else
        printf("Number is not Armstrong number");

    return(0);
}
