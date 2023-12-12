// author: jaydattpatel
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i, j, output;
    printf("Enter 2 numbers:");
    scanf("%d%d", &i, &j);
    
    sum(i, j, output); // function call
    printf("\nThe output of sum is: %d", output);
    
    sub(i, j, output); // function call
    printf("\nThe output of sub is: %d", output);
    
    mul(i, j, output); // function call
    printf("\nThe output of mul is: %d", output);
    
    return 0;
}

int sum(int a,int b, int ans)
{   ans = a + b;    return (ans);}

int sub(int a,int b, int ans)
{   ans = a - b;    return (ans);}

int mul(int a,int b, int ans)
{   ans = a * b;    return (ans);}

