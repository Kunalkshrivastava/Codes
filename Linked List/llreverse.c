// print linked list in reverse without reversing it [to do]
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head, *list;


void create(int n)
{
	int data;
	struct node *new;
	
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

void inc()
{	
	if(list->next != NULL)
	{
	list = list->next;
	inc();
	printf("%d\n",list->data);
	}
}
void reverse()
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
		inc();
		printf("%d\n",list->data);
	}
}

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	printf("\n  display \n");
	reverse();
	
		
}

