// create and diplay reverse doubly circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*head;


void create(int n)
{
	int data;
	struct node *new, *list;
	
	for(int i=1; i<=n; i++)
    	{
        	new = (struct node *)malloc(sizeof(struct node));

        	if(new == NULL)
        	{
           		printf("Unable to allocate memory.");
        		break;
       		}
		if(i == 1)
		{
			head = new;
			list = head;
		}

        	printf("Enter the data of node %d: ", i);
		scanf("%d", &data);
		
		list->next = new;
		new->data = data;
		new->prev = list;
		new->next = head;
		list = list->next;

		if(i==n)
		head->prev = list;
	}
}

void displayreverse()
{
	struct node *list;
	if(head == NULL)
    	{
        printf("List is empty.");
        return;
    	}
	else
	{
		list = head->prev;
		do
		{
			printf("%d\n",list->data);
			list = list->prev;
		}while(list->next != head);
	}
}

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	printf("\n  display \n");
	displayreverse();
	
		
}

