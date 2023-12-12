// author: jaydattpatel
#include<stdio.h>
#include<string.h>
  
struct Student
{
    char name[50];
    int age;
    float height;
    int weight; 
    char branch[20];
    char gender[10];
}S1;        // globle variable struct S1

struct Student S2;      // globle variable struct S2

void main()
{
    struct Student S3;      // local variable S3
    struct Student S4 = { "Amit" , 30 , 180.12 , 81 , "Mechanical" , "Male" };  // local variable struct S4
    struct Student S5;
    strcpy(S1.name, "Viraaj");
    S1.age = 11;
    S1.height = 181.54;
    S1.weight = 82;
    strcpy(S1.branch, "Civil");
    strcpy(S1.gender, "Male");
    
    printf("\nS2 Student name:\t");scanf("%s", S2.name);
    printf("\nS2 Student age:\t");scanf("%d", &S2.age);
    printf("\nS2 Student height:\t");scanf("%f", &S2.height);
    printf("\nS2 Student weight:\t");scanf("%d", &S2.weight);
    printf("\nS2 Student branch:\t");scanf("%s", S2.branch);
    printf("\nS2 Student gender:\t");scanf("%s", S2.gender);

    printf("\nS3 Student name,age,height,weight,branch,gender:\n");
    scanf("%s%d%f%d%s%s",S3.name,&S3.age,&S3.height,&S3.weight,S3.branch,S3.gender);

    S5 = S3;
    
    printf("\nDisplaying Student record:\n");
    printf("\nStudent S1 : {%s; %d; %f; %d; %s; %s}",S1.name,S1.age,S1.height,S1.weight,S1.branch,S1.gender);
    printf("\nStudent S2 : {%s; %d; %f; %d; %s; %s}",S2.name,S2.age,S2.height,S2.weight,S2.branch,S2.gender);
    printf("\nStudent S3 : {%s; %d; %f; %d; %s; %s}",S3.name,S3.age,S3.height,S3.weight,S3.branch,S3.gender);
    printf("\nStudent S4 : {%s; %d; %f; %d; %s; %s}",S4.name,S4.age,S4.height,S4.weight,S4.branch,S4.gender);
    printf("\nStudent S5 : {%s; %d; %f; %d; %s; %s}",S5.name,S5.age,S5.height,S5.weight,S5.branch,S5.gender);

}

    
