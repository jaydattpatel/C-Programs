// author: jaydattpatel
#include <stdio.h>  
#include <stdlib.h>  

int main()
{  
   FILE *fp; 
   int position,i;
   char cc[100]="This is C programming.",rc,rcc[100]; 
  
   fp = fopen("myfile1.txt","w+");  //"w","w+","wb","wb+","w+b" use to creat new file or overwrite file.
   fclose(fp);
   printf("myfile1.txt created.\n");

   remove("myfile1.txt"); // remove or delete file myfile1...
   printf("myfile1.txt deleted.\n");

   fp = fopen("myfile2.txt","w+");  //"w","w+","wb","wb+","w+b" use to creat new file or overwrite file.
   printf("myfile2.txt created.\n");
   fputs(cc, fp);  //wite string character in file
   fclose(fp);
   

   fp = fopen("myfile.txt","w+");  //"w","w+","wb","wb+","w+b" use to creat new file or overwrite file.
   printf("myfile.txt created or open.\n");
   if(fp == NULL)
      {
         printf("fail to open file!");   
         exit(1);             
      }
   rewind(fp); //sets position of pointer to the beginning of the file
   fputs(cc, fp);  //wite string character in file
   position = ftell(fp);  // ftell() store the position of pointer to reuse when print data
   fputs("University.", fp);  
   fclose(fp);  

   fp = fopen("myfile.txt","r"); // "r","r+","rb","rb+","r+b" use to open file to read
   if(fp == NULL)
      {
         printf("fail to open file!");   
         exit(1);             
      }
   fgets(rcc,100,fp);   //read string character in file
   printf("%s\n",rcc);

   for(i=0;i<5;i++)
   {
      fseek( fp, position, SEEK_SET );   // set pointer at stored pointer address.
      /*
      fseek(FILE *pointer, long int offset, int position); fseek( fp, 7, SEEK_SET ); 

      SEEK_SET set value 0 : It denotes starting of the file. (first pointer move from current position to start position of file ,after that it will move to postion offset set (+value) or (-value) for move forward and backword from starting position)

      SEEK_CUR set value 1 : It denotes file pointer’s current position.(pointer move from current position to postion offset set (+value) or (-value) for move forward and backword from current position)

      SEEK_END or set value 2 : It denotes end of the file.(first pointer move from current position to end position of file ,after that it will move to postion offset set (+value) or (-value) for move forward and backword from ending position)
      */ 
      fgets(rcc,100,fp);   //read string character in file
      printf("%s\n",rcc);
   };
     printf("SEEK_END=%d\n,SEEK_SET=%d\n,SEEK_CUR=%d\n",SEEK_END,SEEK_SET,SEEK_CUR);

     fseek( fp, -5, SEEK_END ); // move pointer to end of file and then five offset -5 to move 5-bytes backword pointer

     while ((rc=fgetc(fp)) != EOF)  {printf("%c",rc);  }
     //while loop to print data from current pointer  position to end by compare character current to last character
         
     printf("\nEOF=%c\n",EOF); //EOF use to get last character of file 

    fclose(fp);
}  