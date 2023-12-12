// author: jaydattpatel
#include <stdio.h>
#include <string.h>
//typecasting use to convert data from one formate to other.
 
int main( )
{
   
   int sum = 17, count = 5;
   double mean;

   mean = (double) sum / count; // here we used double to convert integer to double float
   printf("Value of mean : %f\n", mean );

   
   int  i = 17;
   char c = 'c'; /* ascii value is 99 */
   float s;

   s = i + c;  /* here 'c' ascii taken as its value*/
   printf("Value of sum : %f\n", s);

   return 0;
}