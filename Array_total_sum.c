// find average weight of number of arr 

// author: jaydattpatel
#include<stdio.h>

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
            printf("%d.%f\n",i,x[i]);
};

int main()
    {   
        int size;
        float average;
        printf("Enter array size: ");
        scanf("%d",&size);
        float arr[size];
        for(int i=0;i<size;i++)
        {
            printf("%d Enter : ",i+1);
            scanf("%f",&arr[i]);
        }
        average = average_fun(arr,size);
        printf("Average = %f",average);
        
        return 0;
    }