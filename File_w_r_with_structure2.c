// author: jaydattpatel
#include<stdio.h>
#include <stdlib.h>

struct emp
{
    int serialnum;
    char name[10];
    int age;
};

int main()
{
    int i,n,position;
    struct emp e;
    FILE *fp;
    
    fp = fopen("onestruct.txt", "a");   // "a","ab","a+","ab+","a+b" command use to edit or add data in file and move pointer at last character of file
     if(fp == NULL)
        {
            printf("fail to open file!");   
            exit(1);             
        }
    position = ftell(fp);              // ftell() store the position of pointer to reuse when print data
    printf("How many data you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("Enter Sr.num,Name and Age:");
            scanf("%d%s%d",&e.serialnum, e.name, &e.age);
            fwrite(&e, sizeof(struct emp), 1, fp);   //write structure data to file. 
        };
    fclose(fp);
     
    fp = fopen("onestruct.txt", "r"); // "r","r+","rb","rb+","r+b" use to open file to read
      if(fp == NULL)
        {
            printf("fail to open file!");   
            exit(1);             
        }
    fseek(fp,position,SEEK_SET);   

    for(i=0;i<n;i++)
      {  
        fread(&e, sizeof(struct emp), 1, fp); //read structure data from file.
        printf("\n%d %s %d",e.serialnum, e.name,e.age);
      };
    fclose(fp);
}