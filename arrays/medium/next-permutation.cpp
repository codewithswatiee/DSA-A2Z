#include <bits/stdc++.h>
using namespace std;


vector<int> next_permutation(vector<int> &arr){
    int ind = -1;
    int n = arr.size();
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for(int i = n-1; i>ind; i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }

    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
}
int main(){
    vector<int> arr = {4, 5, 2, 3, 0, 0};
    next_permutation(arr);
    return 0;
}