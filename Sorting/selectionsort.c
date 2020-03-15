// sort array using selection sort
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10];
	int t,i,j;
	
	printf("Enter any 10 numbers\n");
	for(i=0; i<10; i++)
	scanf("%d  ",&a[i]);
	
	for(i=0 ; i<10-1 ; i++)
	{
	for(j=i+1 ; j<10 ; j++)
	{
		if(a[i]>a[j])
		{
			t = a[j];
			a[j] = a[i];
			a[i] = t;
		}
	}
	}

	for(i=0; i<10; i++)
	printf("%d  ",a[i]);
}
