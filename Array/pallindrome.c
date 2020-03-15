// check pallindrome string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char t1[20];
	char t2[20];
	printf("enter the string\n");
	scanf("%s",t1);
	int l= strlen(t1);
	int k= l-1;
	for(int i=0 ; i< l ; i++)
	{
	t2[k] = t1[i];
	k--;
	}
	
	int a = strcmp(t1,t2);
	if ( a == 0)
		printf("\nit's pallindrome");
	else
		printf("\nnot a pallindrome");
		
}
