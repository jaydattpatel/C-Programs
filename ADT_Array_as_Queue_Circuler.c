// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define n 5
int cq[10],front =-1, rear = -1,item;

void insert()
{
    if(front == ((rear+1)%(n-1)))
    {   printf("Queue overflow !!\n");  return;  }
    else
    {
        printf("\nEnter Value:");   scanf("%d",&item);
        if(front == -1)     front = rear = 0 ;
        else    rear = ((rear+1)%(n-1));
        cq[rear] = item;
        printf("Insertion Successfull !!\n");  
        display();
    }
}

void delete()
{
    if(front == -1)     printf("Queue underflow !!!\n");
    else
    {
        item = cq[front];
        printf("Elements deleted from queues.\n");
        cq[front] = NULL;
        if(front == rear)   front = rear = -1;
        else    front = ((front+1)%(n-1));  
        display();
    }
}
void display()
{
    int i;
    if(front == -1)     printf("Queue is emplty !!!\n");
    else
    {
        if (front <= rear)
        { for(i=front;i<=rear;i++)    printf("%d\n",cq[i]);}
        
        if (front > rear)
        {
            for(i=front;i<=n-1;i++)     printf("%d\n",cq[i]);
            for(i=front;i<=rear;i++)    printf("%d\n",cq[i]);
        }
        printf("front queue is %d\n",cq[front]);
        printf("rear queue is %d\n",cq[rear]);
    }
}

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
                case 1:{insert();    break;}
                case 2:{delete();    break;}
                case 3:{display();   break;}
                case 4:{exit(0);}
                default:{printf("\nFunction Terminated.");   exit(0);}
            }
    } 
    return(0);
}