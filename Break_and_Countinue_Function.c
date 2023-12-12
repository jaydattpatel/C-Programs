// author: jaydattpatel
#include <stdio.h>
#include <conio.h>

int main()
{
 
int x;
for (x=1; x<=10; x++)
    {
    if (x==5)
    break; /*break loop only if x==5 */
    printf("%d\n", x);
    }
    printf ("\nBroke out of loop at x =%d",x);

int y;
for (y=1; y<=10; y++)
    { 
    if (y==5)
    continue; /* skip remaining code in loop only if x == 5 */
    printf("%d\n", y);
    }
    printf("\nUsed continue to skip");
    
return 0;
}
