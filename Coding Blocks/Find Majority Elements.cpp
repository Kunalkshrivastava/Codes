#include <iostream>
#include <vector>
using namespace std;
void majorityElement(vector<int>& nums) 
    {
        int sz = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
        for (i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
            else if (count1 == 0)
            {
                num1 = nums[i];
                count1 = 1;
            }    
            else if (count2 == 0)
            {
                num2 = nums[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1 = count2 = 0;
        for (i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
        }
        if(count1 < sz/3 && count2 < sz/3)
            cout<<"No Majority Elements";
        else{
        if (count1 > sz/3)
            cout<<num1<<" ";
        if (count2 > sz/3)
            cout<<num2;
        }
    }
int main() {
    int n,x,element1(0),element2(0),e1count(0),e2count(0);
    vector<int> a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    majorityElement(a);
}
