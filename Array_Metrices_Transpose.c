// author: jaydattpatel
#include <stdio.h>

int main()
{
	int id,vaule;
	int r,c,i,j;
	printf("enter rows and colomns of matrix:\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix(%dx%d):\n",r,c);
	int matrix[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Transpose:\n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
    return 0;
}
