// search and delete the number from linked list
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

void search()
{
	int k;
	struct node *list, *p;
	printf("enter the number you want to find and delete\n");
	scanf("%d",&k);
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
			if(list->data == k)
			{
				p->next = list->next;
				//free(p);
			}
			else if(list->data == k && list->next == NULL)
			{
				p->next = NULL;
				free(list);
			}
		p = list;
		list = list->next;
		}
	}
}
void display()
{
	printf("display\n");
	struct node *list;
	list = head;
	while(list != NULL)
	{
		printf("%d\n",list->data);
		list = list->next;
	}
}

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	search();
	display();
}

