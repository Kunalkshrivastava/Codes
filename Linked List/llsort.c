//sort linked list
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

void sort()
{
	struct node *check;
	list = head;
	int temp;

	while(list->next != NULL)
	{
		check = list->next;
		while(check != NULL)
		{
			if(list->data > check->data)
			{
				temp = list->data;
				list->data = check->data;
				check->data = temp;
			}
			check = check->next;
		}
		list = list->next;
	}
}

void display()
{
	//struct node *list;
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

int main()
{
	int n,data;
	printf("enter the number of nodes \n");
	scanf("%d",&n);

	create(n);
	sort();
	printf("\n  display \n");
	display();
	
		
}

