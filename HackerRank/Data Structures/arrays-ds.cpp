//Arrays - DS
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i =0; i< n; i++)
    {
        cin>>a[i];
        b[n-i-1] = a[i];
    }
    for(int i =0; i< n; i++)
    {
        cout<<b[i]<<" ";
    }
}
