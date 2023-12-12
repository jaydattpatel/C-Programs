// author: jaydattpatel
#include<stdio.h>  
int main()
{      
    int i=0,j=0;    
    int arr[3][4]={{11,22,33,44},{21,22,23,24},{31,32,33,34}};     
    int (*p)[4];
    p = arr;   
    for(i=0;i<3;i++)
    {    
        printf("Address of %dth array %u\n",i,p+i);
        for(j=0;j<4;j++)
        {    
            printf("arr[%d][%d] = %d \n",i,j,*(*(p+i)+j));    
        }  
        printf("\n");
    }  
    return 0;  
}    