// author: jaydattpatel
#include <stdio.h>
#include <conio.h>
int main()
{
  int i;
  char str[50]="Good";
  int sum=0,*p,*p1,*p2,*p3,arr[10]={11,12,13,14,15,16,17,18,19,20};

  p = &arr[0];
  printf("\n*p = %d, p = %d",*p,p);

  //access the data of array or multiple index address by pointer
  printf("\n\nMethod-1:");
  printf("\n*p+0 = %d (address:%u)",*p+0,p+0);
  printf("\n*p+1 = %d (address:%u)",*p+1,p+1);
  printf("\n*p+2 = %d (address:%u)",*p+2,p+2);
  printf("\n*p+3 = %d (address:%u)",*p+3,p+3);

  //access the data of array or multiple index address by pointer
  printf("\n\nMethod-2:");
  printf("\n*(p+0) = %d (address:%u)",*(p+0),p+0);
  printf("\n*(p+1) = %d (address:%u)",*(p+1),p+1);
  printf("\n*(p+2) = %d (address:%u)",*(p+2),p+2);
  printf("\n*(p+3) = %d (address:%u)",*(p+3),p+3);

  //access the data of array or multiple index address by pointer
  printf("\n\nMethod-3:");
  p1 = &arr[0];
  for(p1=arr;p1<&arr[10];p1++)
  printf("\n*p = %d (address:%u)",*p1,p1);


  //change array value by define directly pointer with normal variable
  printf("\n\nstring = %s",str);
  for(i=1;i<3;i++)
    *(str+i)=64+i;
  printf("\nAfter change in string = %s",str);

  //access array data by define directly pointer with normal variable
  for(i=0;i<10;i++)
    sum += *(arr+i);
  printf("\n\nSum Method-1: %d",sum);

  //access array data by define pointer
  sum=0;
  for(p=arr;p<&arr[10];p++)
    sum += *p;
  printf("\n\nSum Method-2: %d",sum);

  return 0;
}
