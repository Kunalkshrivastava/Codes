#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t>0){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		nums.push_back(a);
	}
	vector<string> s;
        for(auto i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),[](string a,string b){ return a+b > b+a;});
        
        string str;
        for(auto i:s){
            str = str + i;
        }
        if(s[0] == "0")
            cout<<"0"<<endl;
        else
            cout<<str<<endl;

	t--;
	}
	return 0;
}
