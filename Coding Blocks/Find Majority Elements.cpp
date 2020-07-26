//Find all the elements which appear more than floor(N/3) times in the given array
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,x,element1(0),element2(0),e1count(0),e2count(0);
    vector<int> a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    element1 = a[0];
    e1count = 1;
    for(int i =0; i<n; i++)
    {
        if(a[i]== element1)
        {
            e1count = e1count + 1;
        }
        else if(a[i]== element2)
        {
            e2count = e2count + 1;
        }
        else if(e1count == 0)
        {
            element1 = a[i];
            e1count = 1;
        }
        else if(e2count == 0)
        {
            element2 = a[i];
            e2count = 1;
        }
        else
        {
            e1count --;
            e2count --;
        }
    }
    e1count = 0;
    e2count = 0;
    for(auto i:a)
    {
        if(i== element1)
            e1count = e1count + 1;
        if(i== element2)
            e2count = e2count + 1;
    }
        if(e1count < n/3 && e2count < n/3)
            cout<<"No Majority Elements";
        else if(e2count > n/3 && e1count > n/3)
        {
            if(element1>element2)
                cout<<element1<<" "<<element2;
            else
                cout<<element2<<" "<<element1;
        }
        else if(e1count > n/3)
            cout<<element1;
        else if(e2count > n/3)
            cout<<element2;

       
}
