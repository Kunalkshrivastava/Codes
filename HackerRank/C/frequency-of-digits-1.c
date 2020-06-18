//Digit Frequency

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[10]= {0};
    char c;
    while(scanf("%c",&c)==1)
    {
        if(c >= '0' && c<= '9' )
            a[c-'0']= a[c-'0'] +1;
    }
    for(int i=0; i< 10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
