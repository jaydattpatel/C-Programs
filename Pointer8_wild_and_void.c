// author: jaydattpatel
#include <stdio.h>

int main()
{
  int a=10,*p1;
  printf("Address of a = %u\n",&a);
  printf("p1 = %u\n",p1);   // called wild pointer untill assign address of variable
  p1 = &a;
  printf("Address of a = %u\n",&a);
  printf("p1 = %u\n",p1);

  int b=65;
  float x=5.4;
  char ss[100]="World";
  void *ptr;  //void pointer used save address of different data type of varible
  ptr = &b;
  printf("Void pointer (int)= %d\n",*((int*)ptr));
  ptr =&x;
  printf("Void pointer (float)= %f\n",*((float*)ptr));
  ptr =&ss[0];
  printf("Void pointer (char)= ");
  for(int i=0;ss[i]!='\0';i++)
      printf("%c",*((char*)(ptr+i)));
  return 0;
}
