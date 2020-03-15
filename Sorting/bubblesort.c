//sort using bubble sort in accending order
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10];
	int t,i,j;
	
	printf("Enter any 10 numbers\n");
	for(i=0; i<10; i++)
	scanf("%d  ",&a[i]);

	for(i=0 ; i<10 ; i++)
	{
	for(j=0 ; j<10-i ; j++)
	{
		if(a[j]>a[j+1])
		{
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
		}
	}
	}

	for(i=0; i<10; i++)
	printf("%d  ",a[i]);

}
