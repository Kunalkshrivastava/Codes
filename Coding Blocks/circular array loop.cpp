#include <iostream>
#include <vector>
using namespace std;

int next(vector<int>nums , int i){
    return (nums[i]+i+nums.size())%nums.size();
}

bool circularArrayLoop(vector<int> nums){

    int len = nums.size();
    for(int i=0; i< len; i++)
    {
        int slow =0, fast =0;

        if(nums[i] == 0){
            continue;
        }

        while(nums[slow]*nums[next(nums,slow)]>0 && nums[fast]*nums[next(nums,fast)]>0 &&
                    nums[fast]*nums[next(nums,next(nums,fast))]>0){

                        slow = next(nums,slow);
                        fast = next(nums,next(nums,fast));

                        if(slow == fast){

                            if(slow == next(nums,slow))
                                break;

                            return true;
                        }
                    }

                    slow = i;
                    int value = nums[slow];
                    while(value*nums[slow] >0){
                        int x = slow;
                        slow = next(nums,slow);
                        nums[x] = 0;
                    }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums;
    for(int i =0; i<n; i++){
        int a;  cin>>a;
        nums.push_back(a);
    }

    cout<<circularArrayLoop(nums);

return 0;
}
