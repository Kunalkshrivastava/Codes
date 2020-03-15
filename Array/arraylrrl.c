//print array in left to right and right to left order continuously from top to down (3x3 matrix)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][3];
	int c=0;
	printf("enter nine numbers");
	for(int i =0; i<3; i++)
	{
	for(int j = 0; j<3; j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	int k=0;
	int l=0;
	while(c<=9)
	{

		if(k%2==0)	//for left to right
		{
			printf("%d",a[k][l]);
			l++;
			if(l==3)	//change value at end
			{
			k++; l=2;}
		}
		else	//for rigth to left
		{
			printf("%d",a[k][l]);
			l--;
			if(l==-1)	//change value at end
			{
			k++;}
		}c++;
	}
}
