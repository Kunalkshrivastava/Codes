#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
        vector<int> nums;
        
        int s=-(n/2);
        for(int i=0; i<n; i++){
        
            nums.push_back(s);
            s = s+1;
            if(n%2 == 0 && s == 0)
                s = 1;
        }
        
    for(auto i:nums)
        cout<<i<<" ";

}
