// author: jaydattpatel
#include<stdio.h>
#include<conio.h>

int fact(int);

int main()
{
    int num,output;
    printf("Enter numbers:");
    scanf("%d", &num);
    output = fact(num);
    printf("\nThe factorial of %d numbers is: %d",num, output);
    return 0;
}

int fact(int n)
{   if(n==0) 
    {
        return 1;
    }
    return(n*fact(n-1)); 
}


