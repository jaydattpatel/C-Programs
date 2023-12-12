// author: jaydattpatel
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{ 
int a[100][100],b[100][100],sum[100][100],sub[100][100],mul[100][100];
int i,j,k,rows,columns; 
printf("Enter the number of rows of matrix:\n");
scanf("%d", &rows);
printf("Enter the number of columns of matrix:\n");
scanf("%d", &columns);
printf("Enter elements of matrix A :\n");
for(i=0;i<rows;i++) 
	{ 	
		for(j=0;j<columns;j++) 
			scanf("%d",&a[i][j]);
		printf("\n");
	}

printf("Enter the elements of matrix B:\n"); 
for(i=0;i<rows;i++) 
	{ 
		for(j=0;j<columns;j++) 
			scanf("%d",&b[i][j]); 
		printf("\n");
	}
printf("\n====== Matrix Addition-Subtraction-Multiplication =======\n"); 
for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			sub[i][j]=a[i][j]-b[i][j];
			
			mul[i][j]=0;
			for(k=0;k<columns;k++)
				mul[i][j]= mul[i][j] + (a[i][k] * b[k][j]);

		} 
	}
printf("\n====== Matrix Addition =======\n");
for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{   
		    	printf("\t");
			printf("%d",sum[i][j]);
		}	
		printf("\n"); 
	}
printf("\n====== Matrix Subtraction=======\n");
for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{   
		    	printf("\t");
			printf("%d",sub[i][j]);
		}
		printf("\n"); 
	}
printf("\n====== Matrix Multiplication =======\n");
for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{   
		    	printf("\t");
			printf("%d",mul[i][j]);
		}	
		printf("\n"); 
	}
return(0);
}

