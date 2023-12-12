// author: jaydattpatel
#include<stdio.h>

struct Student
{
    char name[10];
    int roll;
};

void show(struct Student View);

int main()
{
    struct Student std;
    printf("\nEnter Student record:\n");
    printf("\nStudent name:\t");
    scanf("%s", std.name);
    printf("\nEnter Student rollno.:\t");
    scanf("%d", &std.roll);
    show(std);
}

void show(struct Student View)
{
    printf("\nstudent name is %s", View.name);
    printf("\nroll is %d", View.roll);
}