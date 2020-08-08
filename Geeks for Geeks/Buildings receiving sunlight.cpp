#include<iostream>
#include<vector>
using namespace std;
int main() {

	int t,len,value;
	cin>>t;
	while(t>0){
		int max=0, count=0;
		cin>>len;
		vector <int> v;
		for(int i=0; i<len; i++){
			cin>>value;
			v.push_back(value);			
		}
		max = v[0];
		for(int i=0; i< len; i++){
			if(v[i] >= max)
			{
				max = v[i];
				count ++;
			}
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
