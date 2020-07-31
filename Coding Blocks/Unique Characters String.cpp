#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int fun(vector<string>& arr, int i, string s)
{
    int ob1,ob2;
    ob1 = ob2 = INT_MIN;

    if(i == arr.size())
    {
        if(s.length() > 26)
            return 0;
        int freq[26] = {0};

        for(int k=0; k< s.length(); k++){
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

int main() {
    int n;
    cin>>n;
    vector <string> arr;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        arr.push_back(s);
    }

    cout<<maxLength(arr);   
}
