// reverse and print linked list using pointer
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

void pointerreverse()
{
	struct node *n1, *n2, *n3;
	n1 = head;  n2 = head;  n3 = head;
	while(1)
	{
		if(n2 == head)
		{
			n3 = n3->next;
			n2->next = NULL;
			n2 = n3;			
		}
		else if(n3->next == NULL)
		{
			head = n3;
			n3->next = n2;
			break;
		}
		else
		{	
			n2 = n3;
			n3 = n3->next;
			n2->next = n1;
			n1 = n2;
		}	
	}
}

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	pointerreverse();
	printf("\n  display \n");
	display();
}

