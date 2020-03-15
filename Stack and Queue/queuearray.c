//make a queue using array
#include<stdio.h>

void enqueue(int a[],int *front, int *rear, int max)
{
	int value;
	if(*rear >= max-1)
	{
		printf("queue overflow\n");
	}
	else
	{
		printf("enter the value you want to enter\n");
        scanf("%d",&value);
		*rear = *rear +1;
		a[*rear]= value;
		
		if(*front == -1)
		{
			*front = 0;
		}
	}
}

void dequeue(int a[],int *front, int *rear, int max)
{
	if(*front == -1 || *rear < *front)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("dequeue done\n");
		*front = *front + 1;
	}
}

void display(int a[],int *front, int *rear)
{
	int i;
	printf("\tDISPLAY\n");
	for(i = *front; i <= *rear ; i++ )
	{
		printf("%d  ",a[i]);
	}
}

int main(void)
{
	int max,front,rear,choice,a[100];
	printf("enter the size of queue\n");
	scanf("%d",&max);
	printf("enter 1 for enqueue \n enter 2 fot dequeue \n enter 3 for display \n enter 4 for exit");
	
	front = -1;
	rear = -1;
	do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue(a,&front,&rear,max);
                break;
            }
            case 2:
            {
                dequeue(a,&front,&rear,max);
                break;
            }
            case 3:
            {
                display(a,&front,&rear);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=4);
}
