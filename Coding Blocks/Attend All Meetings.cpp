#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool fun(vector<vector<int>> p){
    sort(p.begin(),p.end());
    int i=1;
    while(i<p.size()){
        if(p[i][0] < p[i-1][1]){
            return false;
        }
        i++;
    }
    return true;
    
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> p;
    for(int i=0; i<n; i++)
    {
        vector<int>temp;
        int a; cin>>a;
        int b; cin>>b;
        temp.push_back(a);
        temp.push_back(b);
        p.push_back(temp);
    }
    bool d = fun(p);
    if(d == true)
        cout<<"true";
    else
        cout<<"false";
}
