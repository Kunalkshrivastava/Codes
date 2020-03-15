//enter large digit number and print
#include <stdio.h>
#define MAX 10001
int main(void) {
	int i;
	char string[MAX];
	scanf("%s",string);
	
	int a[MAX];
	while(string[i]){
			a[i] = (int)string[i]-48;
			printf("%d\t",a[i]);
			i++;
	}
	return 0;
}
