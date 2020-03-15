// delete the number from begin of linked list
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

	struct node *t = head;
	head = head->next;
	free(t);
	
	printf("now the head is %d",head->data);
}
