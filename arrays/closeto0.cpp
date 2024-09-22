#include <bits/stdc++.h>
using namespace std;

int findClosestNumber(vector<int>& nums) {
        int minDistance = nums[0];
        for(auto num : nums){
            if(abs(num) < abs(minDistance)){
                minDistance = num;
            } 
            else if(abs(num) == abs(minDistance)){
                if(num > minDistance) minDistance = num;
            }
        }
        return minDistance;
}

int main(){
    vector<int> nums = {-2, -1, 1};
    cout << findClosestNumber(nums) << endl;
}