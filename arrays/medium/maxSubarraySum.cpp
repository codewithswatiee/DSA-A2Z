#include <bits/stdc++.h>
using namespace std;


// this return the length of the subarray 
// KADANE'S ALGORITHM
// int maxSubArray(vector<int>& nums) {
//         int sum = 0;;
//         int maxi = nums[0];
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             sum += nums[i];
//             maxi = max(maxi, sum);
//             if(sum < 0){
//                 sum = 0;
//             }
//         }
//         return maxi;
// }

// This will also return the Subarray itself
vector<int> maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = nums[0];
    int n = nums.size();
    int arrStart = -1, arrEnd = -1;
    int start = 0;
    
    for (int i = 0; i < n; i++) {
        if (sum == 0) start = i;  // Track the start of the potential subarray
        sum += nums[i];
        
        // Update maximum sum and subarray boundaries
        if (sum > maxi) {
            maxi = sum;
            arrStart = start;
            arrEnd = i;
        }
        
        if (sum < 0) {
            sum = 0;  // Reset sum if it goes negative
        }
    }
    
    // Prepare the result subarray
    vector<int> subArr;
    if (arrStart != -1 && arrEnd != -1) {
        for (int i = arrStart; i <= arrEnd; i++) {
            subArr.push_back(nums[i]);
        }
    }
    return subArr;
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    
    // Get the subarray with the maximum sum
    vector<int> Subarray = maxSubArray(nums);
    
    // Print the subarray with maximum sum
    cout << "The subarray with the maximum sum is: ";
    for (auto i : Subarray) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}