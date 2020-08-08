class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        
        map<int,int> mp;
        
        for(int i=0; i< candies.size(); i++){
            mp.insert({candies[i],1});
        }
        return min(mp.size(),candies.size()/2);
    }
};
