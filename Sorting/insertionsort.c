// sort an array using insertion sort
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[])
{
	int k,i;
	for(int j=1 ; j< 10; j++)
	{
	k = a[j];
	i = j-1;
		while(i>=0 && a[i]>k)
		{
			a[i+1] = a[i];
			a[i] = k;
			i=i-1;
		}
	}
	for(i=0; i<10; i++)
	printf("%d  ",a[i]);
}

int main()
{
	
	int a[10];
	printf("enter 10 numbers\n");
	for(int i=0; i<10; i++)
	scanf("%d",&a[i]);

	insertion_sort(a);
}
