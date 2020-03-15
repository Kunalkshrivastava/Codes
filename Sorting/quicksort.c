//sort an array using quick sort
#include<stdio.h>

int partition(int a[],int initial,int last)
{
	int j;
	int temp = 0;
	int pivot = a[last];
	int i = initial - 1;
	
	for( j = initial; j <= last-1; j++ )
	{
		if( a[j] <= pivot )
		{
			i=i+1;
			
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	temp = a[last];
	a[last] = a[i+1];
	a[i+1] = temp;
	
	return(i+1);
	
}

void quicksort(int a[],int initial, int last)
{
	int q;
	if(initial < last)
	{
		q = partition(a,initial,last);
		quicksort(a,initial,q-1);
		quicksort(a,q+1,last);
	}
}

int main(void)
{
	int i,a[10];
	for(i=1 ; i<=10; i++)
	{
		printf("enter %d number\n",i);
		scanf("%d",&a[i-1]);
	}
	quicksort(a,0,9);
	printf("DISPLAY\n");
	for(i=0 ; i<10; i++)
	{
		printf("%d  ",a[i]);
	}
}
