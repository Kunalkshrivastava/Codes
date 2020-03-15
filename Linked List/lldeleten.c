//delete number from nth position in linked list
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
	list->next = new;
	new = (struct node*)malloc(sizeof(struct node));
	list = list->next;
	list->data = 7;
	list->next = NULL;
	printf("%d\n",head->data);
	printf("%d\n%d\n",head->next->data,head->next->next->data);

	new = (struct node*)malloc(sizeof(struct node));
	printf("enter the nth position, where you want to add your data\n");
	int d,n,c;
	scanf("%d",&n);
	c=2;

	list = head;
	while(c!=n)
	{
		list = list->next;
		c++;
	}
	
	struct node *t = list->next;
	list->next = list->next->next;
	free(t);
	
	printf("%d %d\n",head->data,head->next->data);
}



