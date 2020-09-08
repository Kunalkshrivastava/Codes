class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
    int i =0;
    int n = nums.size();
	while(i!=n){

		if(n == 1 || i == n-1)
			break;

		if(nums[i] == nums[i+1])
			i = i + 2;
		else
			break;
	}
        
	return nums[i];
        
    }
};
