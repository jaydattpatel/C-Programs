// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

#define MAXSTK 10
int stk[MAXSTK], top = -1;

void push()
    {
        if(top >= (MAXSTK-1))
        {printf("\nStack is Full !! Insertion not possible");}
        else
        {   int value;
            printf("\nEnter Value:");   scanf("%d",&value);
            top++;  stk[top] = value;   
            printf("\nInsertion Successfull !!");
        }
    };
void pop()
    {   
        if(top == -1)   
        {printf("\nStack is Empty !! Deletion not possible");}
        else
        {
            printf("\nDeleted : %d",stk[top]); 
            stk[top] = 0;   top--;
        }
    };

void display()
    {
        if(top == -1)   {printf("\nStack is Empty !!");}
        else
        {
            int i;
            printf("\nStack Elements are :\n ");
            for(i=top;i>=0;i--)
                printf("%d\n",stk[i]);      
        }
    };

int main()
{
    int value,choice;
    while(1)
    {
        printf("\n-----------Menu -------------");
        printf("\n1.Push\t2.Pop\t3.Display\t4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{push();     break;}  
            case 2:{pop();      break;}
            case 3:{display();  break;}
            case 4:{exit(0);}
            default:{printf("\nFunction Terminated.");   exit(0);}
            }
    } 
    return(0);
}