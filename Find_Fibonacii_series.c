
//find fibonacii series

// author: jaydattpatel
#include <stdio.h>

void fibonacci(int n) 
{

    int t1 = 0, t2 = 1, nextTerm = 0;
    nextTerm = t1 + t2;
    int i =2;
    printf("Fibonacci Series: %d %d", t1, t2);
    while (i <= n)
    {
        nextTerm = t1 + t2;
        printf(" %d",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
}

int main() 
{
  int n;
  printf("Enter a positive number: ");
  scanf("%d", &n);
  fibonacci(n);
  return 0;
}