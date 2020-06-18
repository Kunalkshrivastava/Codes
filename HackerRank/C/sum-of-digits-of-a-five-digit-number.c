//Sum of Digits of a Five Digit Number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,c,s;
    s =0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        c = n%10;
        n = n /10;
        s = s + c;
    }
    printf("%d",s);
    return 0;
}
