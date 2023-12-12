// author: jaydattpatel
#include<stdio.h>

struct employeepersonal
{
    char eid[10];
    char emobile[10];
    char egender[10];
};

struct employee
{
    char ename[50];
    int esal;
    struct employeepersonal ep;
};

struct company
{
    char company_name[50];
    struct employee employee_detail[2];
}comp[3];

int main()
{
    int i,j;
    
    for(i=0;i<3;i++)
    {
        printf("\n\nEnter (%d) Copmany name:",i+1);
        scanf("%s",comp[i].company_name);
        for(j=0;j<2;j++)
        {
            printf("Enter Name of (%d) Employee of %s:",j+1,comp[i].company_name);
            scanf("%s",comp[i].employee_detail[j].ename);
            printf("Enter salary of %s of %s:",comp[i].employee_detail[j].ename,comp[i].company_name);
            scanf("%d",&comp[i].employee_detail[j].esal);
            
            printf("Enter ID of %s of %s:",comp[i].employee_detail[j].ename,comp[i].company_name);
            scanf("%s",comp[i].employee_detail[j].ep.eid);
            printf("Enter Mobile of %s of %s:",comp[i].employee_detail[j].ename,comp[i].company_name);
            scanf("%s",comp[i].employee_detail[j].ep.emobile);
            printf("Enter Gender of %s of %s:",comp[i].employee_detail[j].ename,comp[i].company_name);
            scanf("%s",comp[i].employee_detail[j].ep.egender);
        }
        
    }

    for(i=0;i<3;i++)
    {
        printf("\n\n(%d)%s:\n",i+1,comp[i].company_name);
        for(j=0;j<2;j++)
        {
            printf("(%d)Employee:%s ,Salary:%d, Id:%s, Mobile:%s, Gender:%s\n",j+1,comp[i].employee_detail[j].ename,comp[i].employee_detail[j].esal,comp[i].employee_detail[j].ep.eid,comp[i].employee_detail[j].ep.emobile,comp[i].employee_detail[j].ep.egender);
        }
    }
    return(0);
}
