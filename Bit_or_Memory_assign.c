// author: jaydattpatel
#include <stdio.h>
#include <string.h>

/* define simple structure */
struct {
   unsigned int widthValidated; // asigned only 4bytes 
   unsigned int heightValidated; // asigned only 4bytes
} status1;

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;  // asigned only 1bits and it can save 0 or 1 value
   unsigned int heightValidated : 1; // asigned only 1bits and it can save 0 or 1 value
} status2;

struct {
   unsigned int age : 3;  // asigned only 3bits and it can save 0-7 value 
} Age;
 
int main( ) 
{
   printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %d\n", sizeof(status2));
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   
   Age.age = 4;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}