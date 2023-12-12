// author: jaydattpatel
#include <stdio.h>
#include <string.h>
 
struct Employee
{
   char name[50];
   int id;
   int salary;
};

/* function declaration */
void increment( struct Employee *ee);
void display( struct Employee displayemp[]);
int main( )
{

   struct Employee emp[50];        
   strcpy( emp[0].name, "C Programming");
   emp[0].id = 100; 
   emp[0].salary = 5000;
   increment(&emp[0]);
   display(emp);
   return 0;
}

void increment( struct Employee *ee ) 
{
      ee->id = ee->id + 5;
      (*ee).salary = (*ee).salary + 1000;
}

void display( struct Employee displayemp[] ) 
{
   printf( "name : %s\n", displayemp[0].name);
   printf( "Id : %d\n",displayemp[0].id);
   printf( "salary : %d\n",displayemp[0].salary );
}