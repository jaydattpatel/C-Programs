// author: jaydattpatel
#include <stdio.h>

void Hi_function (int times); /* function */
int main() 
{
    void (*function_ptr)(int);  /* local void  pointer Declaration */
    function_ptr = Hi_function;  /* copy the address of function block void pointer to local void pointer  */
    function_ptr (3);  /* now local void pointer work as function block */
    return 0;
}
 
void Hi_function (int times) 
{
    int k;
    for (k = 0; k < times; k++) 
            printf("Hi-%d\n",k);
}
