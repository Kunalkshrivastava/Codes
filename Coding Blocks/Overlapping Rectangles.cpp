#include<iostream>
#include<vector>
using namespace std;

bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        if (!(rec1[2]<=rec2[0] || rec1[0]>=rec2[2] || rec1[1]>=rec2[3] || rec1[3]<=rec2[1]))
            return true;
        else
            return false;
}

int main(){
    vector<int>rec1;
    vector<int>rec2;

    for(int i=0; i<4; i++){
        int n; cin>>n;
        rec1.push_back(n);
    }
    for(int i=0; i<4; i++){
        int n; cin>>n;
        rec2.push_back(n);
    }
    cout<<isRectangleOverlap(rec1,rec2);
}
