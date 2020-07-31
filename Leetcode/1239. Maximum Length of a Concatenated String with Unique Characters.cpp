/* Given an array of strings arr. String s is a concatenation of a sub-sequence of arr which have unique characters.

Return the maximum possible length of s. */

class Solution {
public:
    
    int fun(vector<string>& arr, int i, string s)
{
    int ob1,ob2;
    ob1 = ob2 = INT_MIN;

    if(i == arr.size())
    {
        if(s.length() > 26)
            return 0;
        int freq[26] = {0};

        for(int k=0; k<s.length(); k++){
            if(freq[s[k]-'a'] == 1)
            return 0;

            freq[s[k]-'a']++;
        }
        return s.length();

    }

    if(s.length()+ arr[i].length() <= 26)
        ob1 = fun(arr,i+1,s+arr[i]);

        ob2 = fun(arr,i+1,s);

    return max(ob1,ob2);
}

int maxLength(vector<string>& arr)
{
    string s = "";
     return fun(arr,0,s);
}
};
