
// author: jaydattpatel
#include <stdio.h>

int
main ()
{
  int a=0, b=0, c=0, i, j;

  for (i = 0; i < 2; i++)
    {
      a = a + 1;
      b = b + 1;
        for (j = 0; j < 2; j++)
	        {
	            a = a + 1;
	            c = c + 1;
	        }
    }
  printf ("Total=%d\n", a);
  printf ("I loop=%d\n", b);
  printf ("J loop=%d\n", c);
  return 0;
}
