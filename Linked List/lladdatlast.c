// add number at last of linked list
#include <stdio.h> 
#include <stdlib.h> 
  
struct node { 
    int data; 
    struct node* next; 
}*head,*list,*new; 
  
int main() 
{
	new = (struct node*)malloc(sizeof(struct node)); 
	head = new;	
	list = head;
	list->data = 5;
	new = (struct node*)malloc(sizeof(struct node));
	list->next = new;
	new = (struct node*)malloc(sizeof(struct node));
	list = list->next;
	list->data = 6;
	list->next = NULL;
	printf("%d\n",head->data);
	printf("%d\n",head->next->data);

	int d;
	printf("enter number, you want at last\n");
	scanf("%d",&d);
	new = (struct node*)malloc(sizeof(struct node));
	list = head;

	while(list->next != NULL)
	{
	list = list->next;
	}
	list->next = new;
	new->data = d;
	new->next = NULL;

	printf("%d %d %d\n",head->data,head->next->data,head->next->next->data);
}
