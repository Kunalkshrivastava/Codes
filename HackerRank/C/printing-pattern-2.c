//Printing Pattern using Loops

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    int i,j,l,c;
    scanf("%d", &n);
    l = n+ n -1;
    c = n;
  	// Complete the code to print the pattern.
      for(i=0; i< l; i++)
      {
          c =n;
          for(j =0; j< l; j++)
          {
              if(i<n)
              {
                  if(j<n)
                    {
                        if(j<i)
                            printf("%d ",c--);
                        else
                            printf("%d ",c);
                    }
                    else
                    {
                        if(i+j < l)
                            printf("%d ",c);
                        else
                            printf("%d ",++c);
                    }
              }
              else
              {
                  if(j<n)
                    {
                        if(i+j < l-1)
                            printf("%d ",c--);
                        else
                            printf("%d ",c);
                    }
                    else
                    {
                        if(j <= i)
                            printf("%d ",c);
                        else
                            printf("%d ",++c);
                    }                  
              }
          }
          printf("\n");
      }
    return 0;
}
