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
	printf("%d  ",root->data);
	inorder(root->right);
	
	//return root;
}
void preorder(struct node* root)
{
	if(root == NULL)
		return;

	printf("%d  ",root->data);
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
	printf("%d  ",root->data);
	
	//return root;
}
void search(struct node* root,int data,int *count)
{
	if(root == NULL)
		return;
	if(root->data == data)
	{
		*count = 1;
	}

	search(root->left,data,count);
	search(root->right,data,count);
	
}
void nodes(struct node* root,int *count)
{
	if(root == NULL)
		return;

	if(root->data != '\0')
	{
		*count = *count + 1;
	}

	nodes(root->left,count);
	nodes(root->right,count);
	
}
void leaves(struct node* root,int *count)
{
	if(root == NULL)
		return;

	if(root->left == NULL && root->right == NULL)
	{
		*count = *count + 1;	
	}

	leaves(root->left,count);
	leaves(root->right,count);
	
}

int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int height(struct node* root)
{
	int count = 0;	

	if(root == NULL)
		return 0;
	
	if(root->left || root->right)
	{
		count = 1;
	}
	count = count + max(height(root->left),height(root->right));
	return count;
}

struct node* findmin(struct node* root)
{
	/*if(root == NULL)
		return NULL;

	while(root->left != NULL)
	{
		root = root->left;
	}

	return root;*/

	if(root == NULL)
	        return NULL;
    	else if(root->left != NULL) // node with minimum value will have no left child
        	return findmin(root->left); // left most element will be minimum
    	return root;
}

struct node* delete(struct node* root, int data)
{
	if(root == NULL)
		return root;

	if(root->data > data)
		root->left = delete(root->left,data);
	else if(root->data < data)
		root->right = delete(root->right,data);
	else
	{
		if(root->left == NULL && root->right == NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left == NULL)
		{
			struct node *temp = root;
			root = root->right;
			free(temp);
			return root;
		}
		else if(root->right == NULL)
		{
			struct node *temp = root;
			root = root->left;
			free(temp);
			return root;
		}
		else
		{
			struct node *temp = findmin(root->right);
			root->data = temp->data;
			root->right = delete(root->right,temp->data);
		}
	}
	return root;
}

int main()
{
	//struct node * root;

	int choice,data,count;
	head = NULL;
	while(choice!=0)
	{
		printf("\nenter 1. for insert \nenter 2. for diplay inorder \nenter 3. for diplay preorder 					\nenter 4. for diplay postorder \nenter 5. for search \nenter 6. to find number of nodes 					\nenter 7. to find number of leaves \nenter 8. to find height of tree 						\nenter 9. for deletion of node\nenter 0. for exit\n");
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
			count = 0;
			printf("enter the number you want to search\n");
			scanf("%d",&data);
			search(root,data,&count);
			if(count == 1)
				printf("found\n");
			else
				printf("Not found\n");
			break;
		case 6:
			root = head;
			count = 0;
			nodes(root,&count);
			if(count > 0)
				printf("there are %d nodes\n",count);
			else
				printf("No nodes found");
			break;
		case 7:
			root = head;
			count = 0;
			leaves(root,&count);
			if(count > 0)
				printf("there are %d leaves \n",count);
			else
				printf("No leaves found");
			break;
		case 8:
			count = height(root);
			printf("height of tree is %d",count);
			break;
		case 9:
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
