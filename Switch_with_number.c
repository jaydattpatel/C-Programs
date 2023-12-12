// author: jaydattpatel
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,ans,op;
	printf("Enter your day:");
	scanf("%d",&op);
	switch(op)
       	{	
       	case 1:
		printf("Sunday");
		break;

		case 2:
		printf("Monday");
		break;

		case 3:
		printf("Tuesday");
		break;

		case 4:
		printf("Wednesday");
		break;

		case 5:
		printf("Thursday");
		break;
		
		case 6:
		printf("Friday");
		break;
		
		case 7:
		printf("Saturday");
		break;

		default:
		printf("Invalid Input number");
		break;
       }

}
