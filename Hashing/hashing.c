#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

struct dataitem
{
	int data;
	int key;
}*hashArray[SIZE],*nullitem,*item;

int hashing(int key)
{
	return key % SIZE;
}

struct dataitem *search(int key)
{
	int hashIndex = hashing(key);
	
	while(hashArray[hashIndex] != NULL)
	{
	
		if(hashArray[hashIndex]->key == key)
			return hashArray[hashIndex]; 

		++hashIndex;

		hashIndex %= SIZE;
	}
	return NULL;
}

void insert(int key,int data) {

	struct dataitem *item = malloc(sizeof(struct dataitem));
	item->data = data;  
	item->key = key;

	int hashIndex = hashing(key);

	while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
	{

		++hashIndex;

		hashIndex %= SIZE;
	}
	
	hashArray[hashIndex] = item;
}

struct dataitem* delete(struct dataitem* item)
{
	int key = item->key;

	int hashIndex = hashing(key);

	while(hashArray[hashIndex] != NULL)
	{
		if(hashArray[hashIndex]->key == key)
		{
			struct dataitem* temp = hashArray[hashIndex]; 
			hashArray[hashIndex] = nullitem;
			return temp;
		}
		
		++hashIndex;

		hashIndex %= SIZE;
	}     
	
	return NULL;        
}

void display()
{
	int i = 0;
	printf("(KEY,DATA)");
	for(i = 0; i<SIZE; i++)
	{
		if(hashArray[i] != NULL)
        		printf("(%d,%d)\n",hashArray[i]->key,hashArray[i]->data);
		else
			printf(" ~~ \n");
	}
	printf("\n");
}

int main()
{
	int c, key, data;
	nullitem = malloc(sizeof(struct dataitem));
	nullitem->data = -1;  
	nullitem->key = -1; 

	while(c != 5)
	{
		printf(" Enter 1 for insert\n Enter 2 for Delete\n Enter 3 for search\n Enter 4 for Display\n Enter 5 to EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&c);

		switch(c)
		{
		case 1:
			printf("enter the key and data\n");
			scanf("%d",&key);
			scanf("%d",&data);
			insert(key,data);
			break;
		case 2:
			printf("enter the key for delete\n");
			item = search(key);
			delete(item);
			break;
		case 3:
			printf("enter the key for search\n");
			item = search(key);

			if(item != NULL)
			{
				printf("Element found: %d\n", item->data);
			}
			else
			{
				printf("Element not found\n");
			}      
			break;
		case 4:
			display();
			break;
		case 5:
			break;
		default:
			printf("WRONG CHOICE\n");
			break;
		}
	}	
}

