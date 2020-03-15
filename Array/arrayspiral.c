//print array in spiral order (in clockwise order) using one loop, 4x4 matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4][4];
	int o,c,d,k,l;
	printf("enter 16 numbers\n");
	for(int i=0; i<4; i++)
	{
	for(int j=0; j<4; j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	
	o=0;  c=0;  d=3;  k=0;  l=0;
	while(o<16)
	{
		printf("%d ",a[k][l]);

		if(c==l && k==c+1)
		{
		 l=k;  c++; d--;
		}
		else if(l!=d && k==c)
		{
		  l++;
		}
		else if(k!=d && l==d)
		{
		  k++;
		}
		else if(k==d && l!=c)
		{
		  l--;
		}
		else if(l==c && k!=c)
		{
		  k--;
		}
		o++;
	}
}
