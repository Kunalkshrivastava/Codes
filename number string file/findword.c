// accept a text file and find word count in it.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char s[1000];
	char* w;
	int a=0;
	printf("enter word you want to find\n");
	scanf("%s",w);
	FILE *fp= fopen("inputs/maharanapratap.txt","r");
	if (fp == NULL)
	{	printf("error");

	}
	else
	{

		while (!feof(fp))
        	{
			fscanf(fp,"%s",s);
			if(strcmp(s,w) == 0)
            		a++;
			
        	}
	if (a>0)
	printf("%d\n",a);
	else
	printf("not found");
	fclose(fp);
	}
}
