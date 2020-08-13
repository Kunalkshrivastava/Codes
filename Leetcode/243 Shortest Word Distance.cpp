#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0; i<n; i++){
        string v; cin>>v;
        s.push_back(v);
    }
    string s1,s2;
    cin>>s1>>s2;
    int w1 = -1, w2 = -1, m = n;
    for(int i=0; i<n; i++){

        if(s[i] == s1)
            w1 = i;
        else if(s[i] == s2)
            w2 = i;
        if(w2!= -1 && w1!=-1){
            m = min(m,abs(w2-w1));
        }
    }
    cout<<m;
return 0;
}
