#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
    map<int, int> counter;
    for(int i = 0; i < nums.size(); i++){
        counter[nums[i]]++;
    }
    for(int i = 0; i < counter.size(); i++){
        if(counter[i] > nums.size() / 2){
            return i;
        }
    }
    return -1;
}


int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
    return 0;
}