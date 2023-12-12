// author: jaydattpatel
#include <stdio.h>

int print_num(int);
int print_one_space(int,int);
int print_two_space(int,int);

int main()
{
    int i,j,n,n2;
    printf("Enter row:");       scanf("%d",&n);
    
    printf("---------pyramid(1)---------\n");
    for (i=1;i<=n;i++)  {print_num(i); }

    printf("---------pyramid(2)---------\n");
    for (i=n;i>0;i--)   {print_num(i); } 

    printf("---------pyramid(3)---------\n");
    for (i=1;i<=n;i++)  {print_two_space(i,n);    print_num(i);}

    printf("---------pyramid(4)---------\n");
    for (i=n;i>0;i--)   {print_two_space(i,n);    print_num(i);}

    printf("---------pyramid(5)---------\n");    
    for (i=1;i<=n;i++)  {print_one_space(i,n);    print_num(i);}

    printf("---------pyramid(6)---------\n");    
    for (i=n;i>0;i--)   {print_one_space(i,n);    print_num(i);}
        
    printf("---------pyramid(7)---------\n");  
    for (i=1;i<=n;i++)  {print_one_space(i,n);    print_num(i);}
    for (i=n-1;i>0;i--) {print_one_space(i,n);    print_num(i);}

    printf("---------pyramid(8)---------\n");
    n2 = (n%2)?n:(n+1); //only odd number required to print this pattern
    for (i=1;i<=n2;i+=2)    {print_one_space(i,n2);    print_num(i);}
    for (i=n2-2;i>0;i-=2)   {print_one_space(i,n2);    print_num(i);} 

    return 0;
}

int print_num(int num)
    {
        int k;
        for(k=1;k<=num;k++)     printf("%d ",k);
        printf("\n");
    }

int print_one_space(int i,int n)
    {
        int j;
        for(j=1;j<=n-i;j++)     printf(" ");
    }

int print_two_space(int i,int n)
    {   
        int j;
        for(j=1;j<=n-i;j++)     printf("  ");
    }
