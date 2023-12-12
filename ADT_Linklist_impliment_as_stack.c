// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int total_length;
    int used_total_length;
    int *ii;
};

void creatarray(struct node *a,int tlength,int usedtlength)
{
    a->total_length = tlength;
    a->used_total_length = usedtlength;
    a->ii = (int*)malloc(tlength * sizeof(int));
    printf("Struct data memory allocate successfully.\n");
}

void setvalue(struct node *a)
{
    int i;
    for(i=0;i<a->used_total_length;i++)
            {
                printf("Enter-%d value:",i+1);
                scanf("%d",&(a->ii)[i]);
            }
}

void display(struct node *a)
{   
    int i;
    for(i=0;i<(a->used_total_length);i++)
        {
                printf("%d) Value:%d\n",i+1,(a->ii)[i]);
        }
};

int main()
{
    int totallength,used,i;
    printf("Hown many Total length you want to allocate:");
    scanf("%d",&totallength);
    printf("Hown many length you want to use from total:");
    scanf("%d",&used);
    struct node n1;
    creatarray(&n1,totallength,used);
    setvalue(&n1);
    display(&n1);
    return(0);


}