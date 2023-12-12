// author: jaydattpatel
#include <stdio.h>
#include <string.h>
typedef struct Books 
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}tbook;

/* function declaration */
void printBook( tbook bookprint );

int main( )
{
   typedef tbook Buk;
    
   struct Books Book1; //define book1 method-1
   tbook Book2;   //define book1 method-2
   Buk Book3;  //define book1 method-3
 
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
   
    /* book 3 specification */
   strcpy( Book3.title, "Science");
   strcpy( Book3.author, "Tanay");
   strcpy( Book3.subject, "Science Tutorial");
   Book3.book_id = 582903;
 
   /* print Book info */
   printBook( Book1 );
   printBook( Book2 );
   printBook( Book3 );

   return 0;
}


/* function */
void printBook( tbook bookprint ) 
{
   printf( "Book title : %s\n", bookprint.title);
   printf( "Book author : %s\n", bookprint.author);
   printf( "Book subject : %s\n", bookprint.subject);
   printf( "Book book_id : %d\n\n", bookprint.book_id);
}