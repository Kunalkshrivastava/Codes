// swap kth position with n-k th position in linked list, where n is length of linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head;


void create(int n)
{
	int data;
	struct node *new, *list;
	
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
    	{
        printf("Unable to allocate memory.");
	//break;
        }
	else
	{
		printf("Enter the data of node 1: ");
    		scanf("%d",&data);

   		head->data = data;
   		head->next = NULL;

		list = head;

		for(int i=2; i<=n; i++)
    		{
	        new = (struct node *)malloc(sizeof(struct node));

	        	if(new == NULL)
	        	{
	            	printf("Unable to allocate memory.");
    	        	break;
        		}

        	printf("Enter the data of node %d: ", i);
	        scanf("%d", &data);
		
		list->next = new;
		new->data = data;
		new->next = NULL;
		list = list->next;
		}

	}
}

void display()
{
	struct node *list;
	if(head == NULL)
    	{
        printf("List is empty.");
        return;
    	}
	else
	{
		list = head;
		while(list != NULL)
		{
			printf("%d\n",list->data);
			list = list->next;
		}
	}
}
void swap(int n)
{
	int c,k;
	c = 1;
	printf("enter the number k, for swapping k from n-k\n");
	scanf("%d",&k);
	struct node *list, *p;
	list = head;
	
	while(list != NULL)
	{
		if(c == k)
		p = list;
		else if( c == n-k)
		break;
		list = list->next;	c++;
	}
	c = p->data;
	p->data = list->data;
	list->data = c;
}

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	swap(n);
	printf("\n  display \n");
	display();
	
		
}

