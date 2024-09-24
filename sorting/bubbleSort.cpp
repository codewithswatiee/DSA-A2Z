#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = n - 1; i > 0; i--){
        int didSwap = 0;
        for(int j = 0; j < i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    bubbleSort(arr);
    for (auto el : arr) {
        cout << el << endl; 
    }
    return 0;
}
