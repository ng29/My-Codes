// Two nodes in the BST's swapped, correct the BST.
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
	int data;
	struct node *left, *right;
};

// A utility function to swap two integers
void swap( int* a, int* b )
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data)
{
	struct node* node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}


void correctBST( struct node* root, struct node** first,
struct node** second){
    if(root->left==NULL && root->right==NULL)
    return;
    
    correctBST(root->left,first,second);
    correctBST(root->right,first,second);
    
    if(root->left->data > root->data || root->data > root->right->data){
        if(*first==NULL)
        *first=root;
        else if(*second==NULL)
        *second=root;
    }
}


/* A utility function to print Inoder traversal */
void printInorder(struct node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
}

/* Driver program to test above functions*/
int main()
{
	/* 6
		/ \
	10 2
	/ \ / \
	1 3 7 12
	10 and 2 are swapped
	*/

	struct node *first=NULL;
	struct node *second=NULL;
	struct node *root = newNode(6);
    root->left        = newNode(10);
    root->right       = newNode(2);
    root->left->left  = newNode(1);
    root->left->right = newNode(3);
    root->right->right = newNode(12);
    root->right->left = newNode(7);

	printf("Inorder Traversal of the original tree \n");
	printInorder(root);

    
	correctBST(root,&first,&second);
	swap(&(first->data),&(second->data));
    

	printf("\nInorder Traversal of the fixed tree \n");
	printInorder(root);

	return 0;
}
