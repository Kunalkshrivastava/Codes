#include<iostream>
#include<map>
using namespace std;
int fun(int n)
{
	int c=0, q=0;
	while(n!=0){
		c = n%10;
		n = n/10;
		q = q + (c*c);
	}
	//cout<<q<<endl;
	return q;
}

int main() {
	int n;
	cin>>n;
	map<int,bool> mp;
	while(n != 1){
		n = fun(n);
		if(mp.count(n) == true)
			break;
		mp.insert(make_pair(n, true));
	}
	if(n==1)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
