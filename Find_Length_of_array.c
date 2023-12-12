// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int len;
   int arr[5] = {8, 8, 1, 3, 6};

   //method-1
   len = *(&arr + 1) - arr; 
   printf("The length of the array is: %d\n",len);

   //method-2
   len = (&arr)[1] - arr;  
   printf("The length of the array is: %d\n",len);

   //method-3
   len = (&arr)[1] - (&arr)[0]; 
   printf("The length of the array is: %d\n",len);

   return 0;
}