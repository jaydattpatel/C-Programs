
// author: jaydattpatel
#include<stdio.h>

int main()
{
	
	int *p; // Pointer to an integer
	
	int (*ptr)[5];  // Pointer to an 5 array of 5 integers
	int arr[5]={11,22,33,44,55};
	
	p = arr;    // Points to 0th element of the arr.
	
	ptr = &arr;     // Points to the whole array arr.
	
	printf("Val of p = %d, add of p = %x\n",*p+0, p+0);
	printf("Val of p = %d, add of p = %x\n",*p+1, p+1);
	printf("Val of p = %d, add of p = %x\n",*p+2, p+2);
	printf("Val of p = %d, add of p = %x\n",*p+3, p+3);

	printf("Val of ptr = %d, add of ptr = %x\n",*(ptr[0]+0), ptr[0]+0);
	printf("Val of ptr = %d, add of ptr = %x\n",*(ptr[0]+1), ptr[0]+1);
	printf("Val of ptr = %d, add of ptr = %x\n",*(ptr[0]+2), ptr[0]+2);
	printf("Val of ptr = %d, add of ptr = %x\n",*(ptr[0]+3), ptr[0]+3);

	return 0;
}
