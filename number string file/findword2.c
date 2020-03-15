// accept a text file and find word count in it, without using any string function
#include <stdio.h>
#include <stdlib.h>

int main()
{

	char s;
	char w[10];
	int a=0;
	int i,j,l;
	i=0;  j=0;  l=0;
	printf("enter word you want to find\n");
	scanf("%s",w);
	while(w[l]!='\0')
	{	l++;	}
	w[l]=' ';
	FILE *fp= fopen("inputs/maharanapratap.txt","r");
	if (fp == NULL)
	{	printf("error");

	}
	else
	{

		while (!feof(fp))
        	{
			fscanf(fp,"%c",&s);
			if(s==w[i] && i==j)
			{
			i++;
				if(s==' ')
				a++;
			}
			else
            		{
			i=0;  j=-1;
			}
			j++;
			
        	}
	if (a>0)
	printf("%d\n",a);
	else
	printf("not found");
	fclose(fp);
	}
}
