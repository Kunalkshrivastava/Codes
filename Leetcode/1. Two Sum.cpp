/* Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice. */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        vector<pair<int,int>> nums2;
        
        for(int i=0; i< nums.size(); i++){
            nums2.push_back(make_pair(nums[i],i));
        }
        
        sort(nums2.begin(),nums2.end());
        
        int i=0,j = nums2.size() - 1;
        
        while(i<j){
                        
            if(nums2[i].first + nums2[j].first == target){
                result.push_back(nums2[i].second);
                result.push_back(nums2[j].second);
                
                return result;
            }
            else if(nums2[i].first + nums2[j].first > target){
                --j;
            }
            else{
                ++i;
            }
        }    
       return {};
    }
};
