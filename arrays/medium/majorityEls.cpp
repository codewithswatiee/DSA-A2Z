#include <bits/stdc++.h>
using namespace std;

// This is a better solution with Time complexity of O(n logn) + O(n) and space complexity of O(n)
// int majorityElement(vector<int>& nums) {
//     map<int, int> counter;
//     for(int i = 0; i < nums.size(); i++){
//         counter[nums[i]]++;
//     }
//     for(int i = 0; i < counter.size(); i++){
//         if(counter[i] > nums.size() / 2){
//             return i;
//         }
//     }
//     return -1;
// }


// Optimal Solution : MOORE'S VOTING ALGORITHM
int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int candidate;
    int n = nums.size();
    for(int i = 0; i< n; i++){
       if(cnt == 0){
        cnt = 1;
        candidate = nums[i];
       } else if(candidate == nums[i]){
            cnt++;
       } else{
        cnt--;
       }
    }
    int cnt1 = 0;
    // Check if the candidate is the majority element
    for(int i = 0; i < n; i++){
        if(nums[i] == candidate){
            cnt1++;
        }
    }
    if(cnt1 > n / 2){
        return candidate;
    }
    return -1;
}


int main(){
    vector<int> nums = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    cout << majorityElement(nums) << endl;
    return 0;
}