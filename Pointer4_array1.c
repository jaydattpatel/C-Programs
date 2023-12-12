// author: jaydattpatel
#include <stdio.h>

int add_array (int *p, int size) 
{
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += p[i];  /* it is equivalent to total +=*p ;p++; */}
 return (total);
    
}

int main()
{
  int arr[5] = {100, 220, 37, 16, 98};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("Total summation is %d\n", add_array(arr, size)); 
  return 0;
    
}


