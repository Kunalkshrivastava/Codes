//Playing With Characters

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c, c1[10], c2[50];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c",&c);
    scanf("%s",&c1);
    scanf("\n");
    //gets(c2);
    scanf("%[^\n]%*c", c2);//scanf("%[^\n]%*c", str); 
    printf("%c\n",c);
    printf("%s\n",c1);
    printf("%s",c2);
    return 0;
}
