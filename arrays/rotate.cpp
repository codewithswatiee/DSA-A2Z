#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr,int k){
    int n = arr.size();
    while(k > 0){
        int temp = arr[n - 1];
        for(int i = n - 1; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        k--;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    rotate(arr, 3);
    for(auto it: arr){
        cout << it << " ";
    }
}