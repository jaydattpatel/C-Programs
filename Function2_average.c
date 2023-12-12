// author: jaydattpatel
#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    float list[100];
    float average(int,float[]); // function prototype
    
    printf("\nHow many numbers:");      scanf("%d", &n);
    printf("Enter numbers:\n");
    for(i=1;i<=n;i++)       scanf("\n%f",&list[i]);
    avg = average(n,list);
    printf("Average = %f\n",avg);
    return 0;
}
float average(int a,float x[])
{   
    float avg;
    float sum=0;
    int i;
    for(i=0;i<a;i++)        sum = sum + x[i];
    avg = sum/a;
    return(avg);
}



