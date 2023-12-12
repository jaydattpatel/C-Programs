// author: jaydattpatel
#include <stdio.h>

int cube(void *num) 
{
  int result;
  result = (*(int*)num) * (*(int*)num) * (*(int*)num);
  return result;
};

int main() 
{
  int x, cube_int;
  x = 4;
  cube_int = cube(&x);
  printf("%d cubed is %d\n", x, cube_int);
  return 0;    
}

