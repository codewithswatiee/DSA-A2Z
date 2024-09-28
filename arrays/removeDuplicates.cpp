#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int n = arr.size();
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int n = removeDuplicates(nums);
    cout << n << "," ;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}