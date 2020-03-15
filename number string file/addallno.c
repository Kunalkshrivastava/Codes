//accept numbers from file and display the sum of all in output file
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long i,a;
	a =0;
	FILE *fp, *op;
	fp = fopen("inputs/hundredinputs.txt","r");
	op = fopen("output1.txt","w");

	while (fscanf(fp,"%lld",&i) >= 0) //while (!feof(fp))
        {
		a =a +i;	
		
        }
	fprintf(op,"%lld", a);
	fclose(fp);
	fclose(op);
}
