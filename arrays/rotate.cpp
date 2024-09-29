#include <bits/stdc++.h>
using namespace std;


//Brute Force
// void rotate(vector<int> &arr,int k){
//     int n = arr.size();
//     while(k > 0){
//         int temp = arr[n - 1];
//         for(int i = n - 1; i > 0; i--){
//             arr[i] = arr[i - 1];
//         }
//         arr[0] = temp;
//         k--;
//     }
// }

void reverse(vector<int> &arr, int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int> &arr, int k){
    int n = arr.size();
    k = k % n;
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    rotate(arr, 3);
    for(auto it: arr){
        cout << it << " ";
    }
}