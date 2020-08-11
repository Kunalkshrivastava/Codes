#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int current = 0;
        int max = INT_MIN;
        
        for(int i=0; i< nums.size(); i++){
            
            current = current + nums[i];
            
            if(current > max)
                max = current;
            if(current < 0)
                current = 0;            
        }
        return max;
    }
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		vector<int> nums;
		for(int i=0; i< n; i++){
			int v; cin>>v;
			nums.push_back(v);
		}

		cout<<maxSubArray(nums)<<endl;

		t--;
	}
	return 0;
}
