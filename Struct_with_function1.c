// author: jaydattpatel
#include <stdio.h>
#include <string.h>
 
struct Books 
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}Book1;        /* Declare Book1 of type Book */

/* function declaration */
void printBook( struct Books book );

int main( )
{    
   struct Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Amit"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Rahul");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   printBook( Book1 );  /* print Book1 info */
   printBook( Book2 );  /* Print Book2 info */

   return 0;
}

/* function */
void printBook( struct Books book) 
{
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n\n", book.book_id);
}