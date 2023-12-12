// find average weight of number of arr 

// author: jaydattpatel
#include<stdio.h>
#include <stdlib.h>

float average_fun(float x[],int size)
{   
    float sum,avg;
    for(int i=0;i<size;i++)
        {
        sum = x[i] + sum;
        } 
    avg = sum/size;
    return(avg);   
};

void display(float x[],int size)
{
    for(int i=0;i<size;i++)
            printf("\n(%d) %f",i+1,x[i]);
};

int main()
    {   

        float average;
        float arr[2000];
        int data,size=0;
        FILE *fp;
    
        fp = fopen("array_data.txt", "r");   

        if(fp == NULL)
        {
            printf("fail to open file!");   
            exit(1);             
        }
        rewind(fp);
        int i=0;
        while(fgetc(fp) != EOF)
        {
            data=0;
            if(fscanf(fp,"%d",&data)==1){
                arr[i++] = (float)data;
                size++;
                printf("%d\t",data);
            }; 
        }
        printf("\nSize:%d",size);
        
        fclose(fp); 

        average = average_fun(arr,size);
        printf("\nAverage = %f",average);

        
        return 0;
    }