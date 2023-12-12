// author: jaydattpatel
#include <stdio.h>
#include <string.h>
//union can store only one data at a time of its elements and length of union will be same of its bigest size of member. Here union length id 20 bytes because variable c[20] is biggest element. 
union Data 
{
   int a;
   float b;
   char c[20];
};
 
int main( )
{
   union Data table;  

   printf( "Memory size occupied by data : %d\n", sizeof(table));     
   
   table.a = 10;
   table.b = 220.5;
   strcpy( table.c, "C Programming");
   printf( "table.a : %d\n", table.a);
   printf( "table.b : %f\n", table.b);
   printf( "table.c : %s\n\n", table.c);
    
   table.a = 10;
   printf( "table.a : %d\n", table.a);
   table.b = 220.5;
   printf( "table.b : %f\n", table.b);
   strcpy( table.c, "C Programming");
   printf( "table.c : %s\n", table.c);
   return 0;
}