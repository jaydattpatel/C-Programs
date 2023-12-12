// author: jaydattpatel
#include <stdio.h>

int swap();
int main()
{
  int a,b;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  swap(&a,&b);
  printf("After Swap a: %d, b: %d",a,b);
  return 0;
}
// operation can be done by transfering the address of variable by pointer.This is called call by reference. 
int swap(int *x,int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp; 
  return(0);
}