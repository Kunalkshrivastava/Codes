#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n; i++){
		cin>>arr[i];
	}

	int i =0;
	while(i!=n){

		if(n == 1 || i == n-1)
			break;

		if(arr[i] == arr[i+1])
			i = i + 2;
		else
			break;
	}
	cout<<arr[i];
	return 0;
}
