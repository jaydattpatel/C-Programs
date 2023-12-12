// author: jaydattpatel
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,ans;
	char op;
	printf("\nSelect your operation (+,-,*,/,%s):","%");
	scanf("%c",&op);
	printf("Enter Value of a:");
	scanf("%d",&a);
	printf("Enter Value of b:");
	scanf("%d",&b);
	switch(op)
       	{	
       	case '+':
		printf("Ans=%d",ans=a+b);
		break;

		case '-':
		printf("Ans=%d",ans=a-b);
		break;

		case '*':
		printf("Ans=%d",ans=a*b);
		break;

		case '/':
		printf("Ans=%d",ans=a/b);
		break;

		case '%':
		printf("Ans=%d",ans=a%b);
		break;

		default:
		printf("Invalid Input number");
		break;
       }

	getch();
}
