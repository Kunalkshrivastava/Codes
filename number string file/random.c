//creat 10 random number between 1 to 100
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
  
int main(void) 
{ 
    
   srand(time(0)); 
  
   for(int i = 1; i<=10; i++) 
    {
	
	printf(" %d \n", (rand()%101) +1); 
	}  	
} 
