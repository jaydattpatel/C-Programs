
// find prime number by user

// author: jaydattpatel
#include<stdio.h>  
int main()
 
 {    
    int n,i,j,flag; 
    printf("Enter Range to find Prime Number: ");
    scanf("%d",&n);
    
    for(j=2;j<=n;j++)
    {     
        flag = 0;
        for(i=2;i<j;i++)    
            {    
                if(j%i==0)    { flag=1;    break;    }    
            }    
        if(flag==0)    printf("%d  ",j);  
    }
    return 0;  
 }    