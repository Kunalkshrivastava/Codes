#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n,v;
	vector<int> nums;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>v;
		nums.push_back(v);
	}

        int i=0, p=0;
        
        while(i< nums.size()){
            
            if(nums[i] != 0)
            {
                nums[p] = nums[i];
                p++;
            }
            
          i++;
        }
        while(p< nums.size()){
            nums[p] = 0;
            p++;
        }
        
        for(auto a:nums)
            cout<<a<<" ";
	return 0;
}
