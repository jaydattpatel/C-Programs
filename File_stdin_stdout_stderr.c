// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>   //here error number file included to give error by error number
extern int errno;
int main()
{
   int i,num;
   FILE* fp;

   fprintf(stdout,"give value of i:");    // print string or data same as printf with file handle
   fscanf(stdin,"%d",&i);  //get data same as scanf with file handle
   fprintf(stdout,"Value of i=%d\n",i);   // print string or data same as printf with file handle
   fprintf(stderr,"Here massage will display\n\n");    // print error message same as printf with file error handle

   //program for error------------
   fp = fopen("abcd.txt","r");   //open file for read
   if(fp == NULL)
   {
      num = errno; //move error code from globle external fix variable to local variable 
      fprintf(stderr,"Value of error:%d\n",errno);
      perror("error printed by perror\n");
    //fprintf(stderr,"Error opening file:%s\n",strerror(num));
   }
   else     {fclose(fp);}

   return 0;
}

