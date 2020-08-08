#include<iostream>
#include<set> 
#include<algorithm>
using namespace std;
int main() {
	int n,v;
	cin>>n;
	set<int> ar;
	for(int i=0; i<n ; i++){
		cin>>v;
		ar.insert(v);
	}
	v = ar.size();
	cout<<min(n/2,v);
	return 0;
}
