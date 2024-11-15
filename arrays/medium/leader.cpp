#include <bits/stdc++.h>
using namespace std;


vector<int> leader(vector<int> &arr){
    int n = arr.size();

     
    vector<int> ans(n, 0);

    // Brute Force  
    // for(int i = 0; i < n; i++){
    //     int leader = true;
    //     for(int j = i+1; i < n; i++){
    //         if(arr[j] > arr[i]){
    //             leader = false;
    //             break;
    //         } 
    //     }
    //     if(leader){
    //         ans.push_back(arr[i]);
    //     }
    // }

    int max = INT_MIN;
    for(int i = n-1; i >=0; i--){
        if(arr[i] > max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
    return ans;


}
int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    leader(arr);
    return 0;
} 