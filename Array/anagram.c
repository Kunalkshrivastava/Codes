//find anagram string(number of each character count should match in both strings) or not
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int l1,l2,k=0;
	char s1[20];
	char s2[20];
	
	printf("enter two strings\n");
	scanf("%s",s1);
	scanf("%s",s2);
	l1= strlen(s1);
	l2= strlen(s2);

	if(l1 == l2)
	{
		for(int i=0; i< l1; i++)
		{
		for(int j =0; j< l1; j++)
		{
			if (s1[i] == s2[j])
			{
			s2[j] = '\0';
			k++;
			break;
			}
		}}
		if(k == l1)
		printf("anagram\n");
		else
		printf("not a anagram\n");
	}
	else
	printf("not a anagram\n");
}
