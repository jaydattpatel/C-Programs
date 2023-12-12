// author: jaydattpatel
#include <stdio.h>  
#include <stdlib.h>  

int main()
{  
   FILE *fp; 
   int value=55,vr;
   char c='X',cc[100]="This is c programming",rc,rcc[100];
  
   fp = fopen("myfile.txt","w+");  //"w","w+","wb","wb+","w+b" use to creat new file or overwrite file.
   if(fp == NULL)
      {printf("fail to open file!");   exit(1); }

   rewind(fp); //sets position of pointer to the beginning of the file

   putw(value,fp); // write integer to file 
   fputc(c, fp);  //wite single character in file
   fputs(cc, fp);  //wite string character in file
    
   fclose(fp);  

   fp = fopen("myfile.txt","r"); // "r","r+","rb","rb+","r+b" use to open file to read
   if(fp == NULL)
      {printf("fail to open file!");   exit(1);  }
   vr = getw(fp); // read integer to file
   rc = fgetc(fp);   //read single character in file
   fgets(rcc,100,fp);   //read string character in file
   printf("%d\n%c\n%s\n",vr,rc,rcc);
    
   fclose(fp);
}  