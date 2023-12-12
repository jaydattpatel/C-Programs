
// find compound interest

// author: jaydattpatel
#include<stdio.h> 
 
int main()
 
 {    
    int year,i;
    float principal_amount,interest,value; 
    printf("\nEnter amount: ");
    scanf("%f",&principal_amount);
    printf("\nHow many year: ");
    scanf("%d",&year);
    printf("\nHow many inerest per anual: ");
    scanf("%f",&interest);
    value = principal_amount;
    while(i<year)
    {
        value = value + (principal_amount * interest);
        printf("\nAfter %d year = %f",i+1,value);
        i++;
    }

    return 0;  
 }    