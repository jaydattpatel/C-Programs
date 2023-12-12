// author: jaydattpatel
#include <stdio.h>
#include <string.h>
 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{

   struct Books *bookptr,book1,book2;        /* Declare Book and pointer */
   
   /* book 1 specification */
   bookptr = &book1;
   strcpy( bookptr->title, "C Programming");
   strcpy( bookptr->author, "Amit"); 
   strcpy( (*bookptr).subject, "C Programming Tutorial");
   (*bookptr).book_id = 6495407;

   //print book1
   printf( "Book title : %s\n", bookptr->title);
   printf( "Book author : %s\n", bookptr->author);
   printf( "Book subject : %s\n", (*bookptr).subject);
   printf( "Book book_id : %d\n\n", (*bookptr).book_id);


   /* book 2 specification */
   bookptr = &book2;
   strcpy( bookptr->title, "Telecom Billing");
   strcpy( bookptr->author, "Rahul");
   strcpy( (*bookptr).subject, "Telecom Billing Tutorial");
   (*bookptr).book_id = 6495700;

   // print book2
   printf( "Book title : %s\n", bookptr->title);
   printf( "Book author : %s\n", bookptr->author);
   printf( "Book subject : %s\n", (*bookptr).subject);
   printf( "Book book_id : %d\n\n", (*bookptr).book_id);

   return 0;
}

