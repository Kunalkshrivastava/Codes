//make a stack using array
#include<stdio.h>

void push(int a[],int *top, int n)
{
	int value;
	if(*top == n)
	{
			printf("stack overflow\n");
	}
	else
	{
		printf("enter the value you want to enter\n");
        scanf("%d",&value);
		*top = *top +1;
		a[*top]= value;
	}
	
}

void pop(int *top)
{
	if(*top == -1)
	{
		printf("stack is empty\n");
	}
	else
	{
		*top = *top-1;
		printf("pop done \n");
	}
}

void display(int a[], int *top)
{
	int i;
	if(*top > -1)
	{
		for(i=*top; i >= 0; i--)
		{
			printf("%d  ",a[i]);
		}
	}
	else
	{
		printf("stack is empty\n");
	}
}

int main(void)
{
	int n,top,choice,a[100];
	printf("enter the size of stack\n");
	scanf("%d",&n);
	printf("enter 1 for push \n enter 2 fot pop \n enter 3 for display \n enter 4 for exit");
	
	top = -1;
	do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push(a,&top,n);
                break;
            }
            case 2:
            {
                pop(&top);
                break;
            }
            case 3:
            {
                display(a,&top);
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
