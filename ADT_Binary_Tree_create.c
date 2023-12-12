/* The ADT Binary Tree 
*/
// author: jaydattpatel
#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

typedef struct node *BTREE; 
//typedef NODE ;

void inorder (BTREE root) 
{
    if (root != NULL) 
    {
        inorder(root ->left);
        printf("%c\t", root ->data); 
        inorder(root -> right);
    }
}


BTREE init_node (char d1, BTREE p1, BTREE p2) 
{
    BTREE new_node;
    new_node = (BTREE)(malloc(sizeof(struct node)));
    new_node->data = d1;
    new_node->left = p1;
    new_node->right = p2;
    return new_node;
}
BTREE create_tree(char data[], int i, int size) 
{
    if (i >= size) 
        return NULL;
    else
        return(init_node( data[i], create_tree(data, 2*i + 1, size), create_tree(data, 2*i + 2, size) ));
}

int main()
{
    char data[] = {'A', 'B', 'C', 'D', 'E'};
    BTREE b;
    b = create_tree(data, 0, 5); 
    inorder(b);
    printf("\n\n");
    return 0;
}