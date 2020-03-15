//program for arithmeric operation
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int c;
	long long a,b;
	printf("enter two numbers \n");
	scanf(" %llu %llu", &a,&b);
	printf("enter 1 for add, 2 for subtract, 3 for multipy, 4 for divide \n");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
	printf("%llu", a+b);
	break;
	case 2:
	printf("%llu", a-b);
	break;
	case 3:
	printf("%llu", a*b);
	break;
	case 4:
	printf("%llu", a/b);
	break;
	default:
	printf("wrong choice \n");
	}
	return 0;
}
