#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
    int n,zeros = 0;
    cin>>n;

    while(n>0){
         n = n/5;
        zeros = zeros+ n;
    }
    cout<<zeros<<endl;
    t--;
    }
}
