// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>


// Creating a node
struct node 
{
  int value;
  struct node *next;
};

typedef struct node NODE;

NODE *start = NULL;

void push()
    {   
        int a;
        printf("\nEnter Value:");   scanf("%d",&a);
        NODE *newnode;
        newnode = (NODE*)malloc(sizeof(NODE));
        newnode->value = a;
        newnode->next = start;
        start = newnode;
    };

void pop()
    {   
        NODE *top = start;
        if(start == NULL)
        {
            printf("\nStack is Empty !! Deletion not possible");return;
        }
        else{start = top->next;     free(top);}
    };

void display()
    {
        NODE *top = start;
        if(start == NULL)
        {printf("\nStack is Empty !!");}
        else
        {
        while(top != NULL)
        {printf("%d",top->value);   printf("->");  top = top->next;}  
            printf("NULL");   
        }
    };

int main()
{
    int value,choice;
    while(1)
    {
        printf("\n***********Menu*************Stack Implimentation Usink Linked List\n");
        printf("1.Push\t2.Pop\t3.Display\t4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{push();    display();  break;}
            case 2:
                {
                    if(start != NULL)
                    {
                    printf("The deleted elements:%d\n",start->value);
                    };
                    pop();    display();    break;
                }
            case 3:{display();    break;}
            case 4:{exit(0);}
            default:{printf("\nFunction Terminated.");  exit(0);}
        }
    } 
    return(0);
}