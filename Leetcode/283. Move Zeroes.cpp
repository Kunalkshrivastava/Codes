class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, p=0;
        
        while(i< nums.size()){
            
            if(nums[i] != 0)
            {
                nums[p] = nums[i];
                nums[i] = 0;
                p++;
            }
            
          i++;
        }
        
        for(auto a:nums)
            cout<<a<<" ";
    }
};
