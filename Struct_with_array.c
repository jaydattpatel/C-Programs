// author: jaydattpatel
#include<stdio.h>

struct Employee
{
    char ename[10];
    int sal;
}emp[50];

int main()
{
    struct Employee *stary;
    int i, j;
    
    for(i = 0; i < 3; i++)
    {
        stary = &emp[i];
        printf("\nEnter %dst Employee record:\n", i+1);
        printf("\nEmployee name:\t");
        scanf("%s", stary->ename);
        printf("\nEnter Salary:\t");
        scanf("%d", &stary->sal);
    }
    printf("\nDisplaying Employee record:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee-%d name is %s",i+1, emp[i].ename);
        printf("\nSalary is %d", emp[i].sal);
    }
}
