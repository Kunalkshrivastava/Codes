class Solution {
public:
    int trailingZeroes(int n) {
        int zeros = 0;
        while(n >0){
            n = n/5;   
            zeros = zeros+ n;         
        }        
    return zeros;
    }
};
