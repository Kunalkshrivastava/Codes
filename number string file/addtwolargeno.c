//add two large numbers of 100 digits
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[400],s2[400];
	char k[400]="\0";
	int a,c,l1,l2;
	int i;
	a=0;
	
	scanf("%s",s1);
	scanf("%s",s2);	
	l1 = strlen(s1);
	l2 = strlen(s1);	
	c=0;
	if (l1>l2)
	i= l1;
	else
	i =l2;
	
	while(i>0)
	{
	    a = (int)(s1[l1-1]) + (int)(s2[l2-1]) - 48 -48 + c;
	
	    k[i-1] = (char) a%10+48 ;
	    c = a / 10;
	    	i--;
	} 
	if(c==0)
	printf("%s", k);
	else
	printf("%d%s",c,k);
}
