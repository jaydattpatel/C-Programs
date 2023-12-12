// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node *next;
}*rear=NULL,*front=NULL;

void insert()
{       
        int a;
        printf("\nEnter Value:");   scanf("%d",&a);
        struct Node *newnode;
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = a;
        newnode->next = NULL;
        if (front == NULL)  front = rear = newnode;
        else 
        {   rear->next = newnode;   rear = newnode;   }
        printf("Insertion Successfull !!\n");
};

void delete()
{
    if(front == NULL)   printf("Queue is emplty !!!\n");
    else
    {
        struct Node *temp = front;
        front = front->next;
        printf("Deleted Elemet is %d",temp->data);
        free(temp);
    }
};
void display()
    {
        if(front == NULL)
            printf("Queue is emplty !!!\n");
        else
        {
            struct Node *f = front,*r = rear;
            while (f->next != r->next)
            {   printf("%d\n",f->data);     f = f->next;   }
            if (f->next == r->next)     printf("%d\n",r->data);
        }
    };

int main()
{
    int value,choice;
    while(1)
    {
        printf("\n--------queue implement Menu -------------");
        printf("\n1.Insert\t2.Delete\t3.Display\t4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: { insert();       break; }
            case 2: { delete();       break; }
            case 3: { display();      break; }
            case 4: { exit(0);    }
            default:{printf("\nFunction Terminated.");   exit(0);}
        }
    } 
    return(0);
}