
// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>
#include <math.h>
#define PI 3.14

int main ()
{
  	int a, b, c;
  	float i,j;
	char ss[100];
	printf("Enter Value a:\n");
	scanf("%d",&a);
	printf("Enter Power of a:\n");
	scanf("%d",&b);
  	c=pow(a,b);	// find power of value
	i=sqrt(c);	// find square root of value
  	printf("pow(%d,%d) =%d\n", a,b,c);
	printf("sqrt of %d:%f\n", c,i);

	i = 5.412;
	ss[0] = toascii(i);
	a = ceil(i);	//Round up to the next integer value
	b = floor(i);	//Round down to the next integer value
	c = abs(i);		//Return the absolute value
	printf("\ni = %5.3f\t ceil(i)= %d\t floor(i)= %d\t abs(i) = %d\n",i,a,b,c); 
	printf("toascii(i) = %s\n",ss);

	a = log(16);
	printf("log(16)= %d\n",a); 
	printf("rand()= %d\n",rand()); 	// print random integer 


	//find value of sin,cos,tan,cot at angle;
	int angle=0;
	float x,y;
	while(angle<=360)
	{
		x = (PI/180)*angle;
		printf("\nAngle: %d\tsin(%10.2f):%10.2f\tcos(%10.2f):%10.2f\ttan(%10.2f):%10.2f",angle,x,sin(x),x,cos(x),x,tan(x));
		angle = angle + 10;
	}

  return 0;
}
