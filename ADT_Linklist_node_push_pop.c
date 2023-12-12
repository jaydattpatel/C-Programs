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
        while (tp != NULL)
        {
            printf("Element: %d\n", tp->data);
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
 
int pop(struct Node* tp)
    {
        if(tp == NULL)
        {
            printf("Stack Underflow\n");
            return 0;
        }
        else
        {
            struct Node* n = tp;
            top = (tp)->next;
            int x = n->data;
            free(n);
            printf("Popped element is %d\n", x);
            return x; 
        }
    }
 
int main()
    {
        top = push(top, 78);
        top = push(top, 7);
        top = push(top, 8);
        top = push(top, 10);
        top = push(top, 15);
        top = push(top, 55);
        printf("-----------------Before pop:\n");
        Traversal(top);
        pop(top);
        pop(top); 
        printf("----------------After pop:\n");
        Traversal(top);
        return 0;
    }
