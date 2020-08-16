class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> s;
        for(auto i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),[](string a,string b){ return a+b > b+a;});
        
        string str;
        for(auto i:s){
            str = str + i;
        }
        if(s[0] == "0")
            return "0";
        else
            return str;        
    }
};
