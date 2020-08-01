#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin>>len;
    int height[len];

    for(int k=0; k<len; k++)
      cin>>height[k];

    int i = 0, j = len-1, m = 0;
       
    while(i<j){
            
      m = max(m,min(height[i],height[j])*(j-i));
            
      if(height[i] < height[j])
          i++;
      else
          j--;            
    }
    cout<<m;
}
