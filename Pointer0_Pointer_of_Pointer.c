// author: jaydattpatel
#include <stdio.h>
int main()
{
    int v1=15,*v2,c,*pc;
    int **x, ***y;

    printf("v1: %d\n", v1);
    printf("address of v1: %p\n",&v1);
    printf("address of v2: %p\n",&v2);
    v2 = &v1;  /* store address of variable v1 in pointer v2 variable*/
    printf("Address of v1 variable: %x\n", &v1);
    printf("Address stored in v2 variable: %x\n", v2 );
    printf("Value of v2 variable: %d\n\n", *v2 );  /* access the value using the pointer */
    
    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);  // 22
    
    pc = &c;     /* store address of variable v1 in pointer v2 variable*/
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 22
    
    c = 11;      /* store value in at both same address of variable*/
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 11
    
    *pc = 2;     /* store value in at both same address of variable*/
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 2

    x = &pc;  // x double pointer can store the address of single pointer.
    printf("Address of x : %p\n", x);
    printf("Value of **x : %d\n\n", **x); // 2

    y = &x;  // y triple pointer can store the address of double pointer.
    printf("Address of y : %p\n", y);
    printf("Value of ***y : %d\n\n", ***y); // 2

    return 0;
}