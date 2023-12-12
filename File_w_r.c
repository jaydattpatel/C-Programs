// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,nd,roll,sr;
   char name[20];
   FILE *fp;
    

   fp = fopen("program.txt","w"); // //"w","w+","wb","wb+","w+b" use to creat new file or overwrite file.
   if(fp == NULL)
   {
      printf("fail to open file!");   
      exit(1);             
   }

   rewind(fp); //sets position of pointer to the beginning of the file

   printf("Enter number of Total data: ");
   scanf("%d",&nd);  

    for(i=0;i<nd;i++)
    {
        printf("Enter name: ");
        scanf("%s",name);
        printf("Enter roll: ");
        scanf("%d",&roll);
        fprintf(fp,"%d.%s %d\n",i+1,name,roll); // write string to file
    }
    fclose(fp);
    
    fp = fopen("program.txt","r"); // "r","r+","rb","rb+","r+b" use to open file to read.
   if(fp == NULL)
      {
         printf("fail to open file!");   
         exit(1);             
      }
   for(i=0;i<nd;i++)
    {
        fscanf(fp,"%d.%s %d\n",&sr,name,&roll); // read string to file
        printf("%d.%s %d\n",sr,name,roll);
    }
    fclose(fp);

   return 0;
}

