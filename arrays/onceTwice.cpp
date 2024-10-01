#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr) {
    int singleNum = 0;
    for(int i = 0; i< arr.size(); i++){
        singleNum ^= arr[i];
    }
    return singleNum;
}

int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    int num = singleNumber(arr);
    cout << num << endl;
}