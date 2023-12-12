// author: jaydattpatel
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,min,max;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	min=(a<b)&&(a<c)?a:(b<a)&&(b<c)?b:c;
	max=(a>b)&&(a>c)?a:(b>a)&&(b>c)?b:c;
	printf("\nSmallest.no=%d",min);
	printf("\nLargest.no=%d",max);
	return(0);
}