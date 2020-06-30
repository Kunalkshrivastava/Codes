#include <iostream>
#include <climits>
using namespace std;
 
int minimum(int a,int b,int c) //minimum of 3 nos.
{ int min=a; 
  if(b<min) min=b;
  if(c<min) min=c;
  return min;} 
 
int main()
{
  int N1 ,N2, N3, min,count; 
  int a,b,c;
  int i=0,j=0,k=0,s=0;
  cin>>N1; cin>>N2; cin>>N3; 
  
  int A[N1], B[N2], C[N3], D[N1+N2+N3];
  for(int i=0; i<N1; i++) cin>>A[i];
  for(int i=0; i<N2; i++) cin>>B[i];
  for(int i=0; i<N3; i++) cin>>C[i];
  
  while(i<N1 || j<N2 || k<N3)
  {
    count=0;
        if(i<N1) a=A[i]; else a=INT_MAX;
    if(j<N2) b=B[j]; else b=INT_MAX;
    if(k<N3) c=C[k]; else c=INT_MAX;
    
        min=minimum(a,b,c);
        if(a==min) {count++; i++; } 
    if(b==min) {count++; j++; } 
    if(c==min) {count++; k++; } 
    
        if(count>=2) {  s++; D[s-1]=min; }
  }
  cout<<s<<"\n";
  for(int i=0; i<s; i++) cout<<D[i]<<"\n";
}
 
