// delete kth position from last of linked list
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
	printf("enter the kth position, delete n-k th position\n");
	int d,n,c,k;
	scanf("%d",&k);
	
	list = head;  n=1;
	while(list->next != NULL)
	{n++;	list = list->next;}	

	list = head;  c=2;
	while(c != n-k)
	{
		list = list->next;
		c++;
	}
	
	struct node *t = list->next;
	list->next = list->next->next;
	free(t);
	
	printf("%d %d\n",head->data,head->next->data);
}



