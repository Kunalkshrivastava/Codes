#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
      cin>>a[i];

      int i=0, c=0;
    
    while(1){
        if(c > 1 && i == 0)
        {
            cout<<"true";
            break;
        }
        if(a[i] < 0 || (c== 1 && i == 0))
        {
            cout<<"false";
            break;
        }
        else
        {
            i = i + a[i];
            c++;
	        if(i >= n)
	        {
	            i = i-n;
	            //c++;
	        }
        }
    }
}
