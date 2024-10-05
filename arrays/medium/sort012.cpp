#include <bits/stdc++.h>
using namespace std;

/*
    The brute force solution for this would be to use any of the one sorting algorithm. If we use Merge Sort thr Time complexity would be O(NlogN) with the Space Complexity of O(N).
*/


// this is the better solution 
// Time Complexity: O(2N)
// Space complexity: O(1)
// void sort012(vector<int> &arr){
//     int cnt0 = 0;
//     int cnt1 = 0;
//     int cnt2 = 0;
//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] == 0) cnt0++;
//         if(arr[i] == 1) cnt1++;
//         if(arr[i] == 2) cnt2++;
//     }
//     for(int i = 0; i < cnt0; i++){
//         arr[i] = 0;
//     }
//     for(int i = cnt0; i < cnt0+cnt1; i++){
//         arr[i] = 1;
//     }
//     for(int i = cnt0+cnt1; i < arr.size(); i++){
//         arr[i] = 2;
//     }
// }


// This is the Optimal solution with Time complexity of O(N) and space Complexity of O(1).
void sort012(vector<int> &arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}



int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sort012(arr);
    for(auto el: arr){
        cout << el << " ";
    }
    return 0;
}