// author: jaydattpatel
#include<stdio.h>
#include<stdlib.h>
 
struct Node
    {
        int data;
        struct Node * next;
    };
 
struct Node* top = NULL;
 
void Traversal(struct Node *tp)
    {
        int i=0;
        while (tp != NULL)
        {
            printf("%d.Element: %d\n",i+1, tp->data);
            tp = tp->next; 
            i++;
        }
    }

void sortlink(struct Node* top)
{
    struct Node *next = (struct Node*) malloc(sizeof(struct Node));
    struct Node *tp = (struct Node*) malloc(sizeof(struct Node));
    
    int a,swap=0;
    tp = top;
    while (tp->next != NULL)    // compare current->next nod is not null
        {   

            swap=0;        
            next = tp->next;    //copy pointer next of current
            
            if((tp->data)>(next->data)) //compare data of current and next node
                {
                    a = tp->data;
                    tp->data = next->data;
                    next->data=a;
                    swap=1;     //swap executed
                }
                
            if(swap == 1)   //if swap executed then again move top or start nod for next loop to check sort data entirly 
                tp = top;
            else
                tp = tp->next;
        }
}
 
struct Node* push(struct Node* tp, int x)
    {

            struct Node* n = (struct Node*) malloc(sizeof(struct Node));
            n->data = x;
            n->next = tp;
            tp = n;
            return tp;
    }
 
 
int main()
    {
        int a,i;
        for(i=0;i<10;i++)
            top = push(top, (rand()%1000));   //limit for integer max 999 values
        
        Traversal(top);
        
        sortlink(top);
        printf("\n\nAfter sort the data:----------------\n");
        Traversal(top);
        return 0;
    }
