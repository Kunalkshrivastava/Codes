// add number at nth position in linked list
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

	new = (struct node*)malloc(sizeof(struct node));
	printf("enter the nth position, where you want to add your data\n");
	int d,n,c;
	scanf("%d",&n);
	printf("enterthe data you want to enter\n");
	scanf("%d",&d);
	c=2;

	list = head;
	while(c!=n)
	{
		list = list->next;
		c++;
	}
	
	new->data = d;
	new->next = list->next;
	list->next = new;

	printf("%d %d %d\n",head->data,head->next->data,head->next->next->data);
}
	
	
