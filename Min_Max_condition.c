// author: jaydattpatel
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,max;
	printf("enter a:");
	scanf("%d",& a);
	printf("enter b:");
	scanf("%d",& b);
	max=(a>b)?a:b;
	printf("Largest.no=%d",max);
	return(0);
}