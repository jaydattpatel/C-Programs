// author: jaydattpatel
#include <stdio.h>
char *mystrstr(char[],char[]);
int main()
{
  char a[100],b[100];
  printf("Enter First String:");
  scanf("%s",a);
  printf("Enter Second String:");
  scanf("%s",b);
  
  printf("Result:%s",mystrstr(a,b));
}

char *mystrstr(char input[],char pat[])
{
  char *start, *p1, *p2;
  for(start = &input[0];*start !='\0';start++)
      {
        p1 = pat;
        p2 = start;
        while(*p1 != '\0')
            {
              if(*p1 != *p2)
                break;
              p1++;
              p2++;
            }
        if(*p1 == '\0')
          return start;
      }
      return NULL;
}
