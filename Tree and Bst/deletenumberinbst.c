#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
}*head,*root;

struct node * createnode(int data)
{
	struct node *new;
	new = malloc(sizeof(struct node)); //struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	
	if(head == NULL)
		head = new;
	return new;	
}
struct node * insert(struct node* root,int data)
{
	
	if (root == NULL)
		return createnode(data);

	if (root->data > data)
		root->left  = insert(root->left, data);
	else if (root->data < data)
		root->right = insert(root->right, data); 
	
	return root;
}
void inorder(struct node* root)
{
	if(root == NULL)
		return;

	inorder(root->left);
	printf("%d--",root->data);
	inorder(root->right);
	
	//return root;
}
void preorder(struct node* root)
{
	if(root == NULL)
		return;

	printf("%d--",root->data);
	preorder(root->left);
	preorder(root->right);
	
	//return root;
}
void postorder(struct node* root)
{
	if(root == NULL)
		return;

	postorder(root->left);
	postorder(root->right);
	printf("%d--",root->data);
	
	//return root;
}

void delete(struct node* root, int data)
{
	if(root == NULL)
		return;

	if(root->data == data)
		root->data = '\0';

	delete(root->left,data);
	delete(root->right,data);
}

int main()
{
	//struct node * root;

	int choice,data,count;
	head = NULL;
	while(choice!=0)
	{
		printf("\nenter 1. for insert \nenter 2. for diplay inorder \nenter 3. for diplay preorder 					\nenter 4. for diplay postorder \nenter 5. for deleting number \nenter 0. for exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:	
			root = head;	
			printf("enter the number you want to enter\n");
			scanf("%d",&data);
			insert(root,data);
			break;
		case 2:
			root = head;
			printf("\nINORDER\n");
			inorder(root);
			break;
		case 3:
			root = head;
			printf("\nPREORDER\n");
			preorder(root);
			break;
		case 4:
			root = head;
			printf("\nPOSTORDER\n");
			postorder(root);
			break;
		case 5:
			root = head;
			printf("\nenter the number you want to delete\n");
			scanf("%d",&data);
			delete(root,data);
			break;
		case 0:
			printf("--exit--\n");
			break;
		default:
			printf("\nwrong choice, choose again\n");
		}
	}
}
