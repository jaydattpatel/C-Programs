// author: jaydattpatel
#include <stdio.h>
#include <string.h>

int stringlength(char x[]);
int stringcopy(char x[],char y[]);
int stringconcatenate(char x[],char y[]);

int main () 
{
   
   int diff;
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12] = "sample";
   char str4[12] = "Muj";
   char str5[100];
   int  len ;

   printf("str1 length :  %d\n", stringlength(str1)); // find string length

   stringcopy(str3, str1);  /* copy str1 into str3 */
   printf("str1 copied into str3 :  %s\n", str3 );
   
   stringconcatenate(str1, str2);  /* concatenate str2 into str1 */
   printf("str2 appended to str1 :  %s\n", str1);
   stringconcatenate(str1, str4);  /* concatenate str4 into str1 */
   printf("str4 appended to str1 :  %s\n", str1);

   return 0;
}

int stringlength(char x[])
{
   int i;
   for(i=0;x[i]!='\0';i++);
   return(i);
}

int stringcopy(char x[],char y[])
{
   int i=0,j=0;
   while(y[j]!='\0')
   {
      x[i] = y[j];
      i++;
      j++;
   }
   x[i]='\0';
   return(x[i]);
}


int stringconcatenate(char x[],char y[])
{
   int i=0,j=0;
   while(x[i]!='\0')
   {
      i++;
   }
   while(y[j]!='\0')
   {
      x[i] = y[j];
      i++;
      j++;
   }
   x[i]='\0';
   return(x[i]);
}