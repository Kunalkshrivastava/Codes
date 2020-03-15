// stop creating random numbers when its 42
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;	
	srand(time(0));
	while(1)
	{
		n = rand()%101;
		printf("%d \n", n);
		if (n == 42)
		break;
	}
}
