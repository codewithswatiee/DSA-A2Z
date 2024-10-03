#include <bits/stdc++.h>
using namespace std;


vector<int> twosum(vector<int> &arr, int n, int target){
    vector<pair<int, int>> indexedArr;
    for(int i = 0; i < n; i++){
        indexedArr[i] = {arr[i], i};
    }
    sort(indexedArr.begin(), indexedArr.end());
    int i = 0;
    int j = n-1;
    while(i < j){
        int sum = indexedArr[i].first + indexedArr[j].first;
        if(sum < target){
            i++;
        } 
        if(sum > target){
            j--;
        }
        if(sum == target){
            return {indexedArr[i].second, indexedArr[j].second};
        }
    }
    return {};
}
int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twosum(nums, nums.size(), target);
    for(auto el : result){
        cout << el << " ";
    }
    return 0;
}