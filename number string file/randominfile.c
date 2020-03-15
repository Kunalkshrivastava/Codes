// create 10 random numbers and print in file
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 

int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	srand(time(0)); 
  
  	 for(int i = 1; i<=10; i++) 
   	 {
	
	fprintf(fp," %d \n", (rand()%101) +1); 
	}  
	fclose(fp);
	return 0;
}
