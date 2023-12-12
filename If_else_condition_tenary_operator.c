// author: jaydattpatel
#include <stdio.h>
#include <conio.h>  
int main()  
{  


    // "?:" is tenary operator
    int age;  // variable declaration  
    printf("\nEnter your age:");  
    scanf("%d",&age);   // taking user input for age variable  
    (age>=18)?(printf("eligible for voting")):(printf("not eligible for voting"));  // conditional operator  
    return 0;  
}  