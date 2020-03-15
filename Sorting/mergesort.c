// sort an array using merge sort
#include <stdio.h>
#include <stdlib.h>

void mergefunc(int a[],int p,int q,int r)
{
	int i,j;

	int n1= q-p+1;
	int n2= r-q;
	int lt[n1+1], rt[n2+1];

	for(i=0; i<n1 ;i++)
	lt[i] = a[p+i];

	for(i=0; i<n2 ;i++)
	rt[i] = a[q+1+i];

	lt[n1] = 32765;	rt[n2] = 32765;

	i=0;	j=0;

	while(p != r+1)
	{
		if(lt[i] <= rt[j])
		{
			a[p++] = lt[i++];
		}
		else
		{
			a[p++] = rt[j++];
		}
	}
}
void merge_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
	q = (p+r) / 2;
	merge_sort(a,p,q);
	merge_sort(a,q+1,r);
	mergefunc(a,p,q,r);
	}
}
int main()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	merge_sort(a,0,n-1);

	for(int i=0; i<n; i++)
	printf("%d  ",a[i]);
}
