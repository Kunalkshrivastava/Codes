class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int f=0, s=0;
        for(auto i:nums)
        {
            mp[i]  = mp[i] + 1;
        }
        for(auto j:mp)
        {
            if(j.second > s)
            {
                s = j.second;
                f = j.first;
            }
        }
        return f;
    }
};
