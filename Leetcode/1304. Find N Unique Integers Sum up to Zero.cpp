class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;
        
        int s= -(n/2);
        for(int i=0; i<n; i++){
            nums.push_back(s);
            s = s + 1;
            
            if(n%2 ==0 && s==0)
                s = 1;
        }
        
        return nums;
    }
};
