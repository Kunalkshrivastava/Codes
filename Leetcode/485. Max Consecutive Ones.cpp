/* Given a binary array, find the maximum number of consecutive 1s in this array. */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

            int c ,max;
            c = max =0;
            for(int i=0; i<nums.size(); i++){

            if(nums[i] == 1){
                c++;
            }
            else{
                if(c > max)
                    max = c;

                c =0;
            }
            }
        if(c > max)
            max = c;
        
        return max;
    }
};
