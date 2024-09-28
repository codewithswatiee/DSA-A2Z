#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void insertionSort(vector<int>& arr, int i, int n){
    if(i == n) return;
    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]){
        swap(arr, j-1, j);
        j--;
    }
    insertionSort(arr, i + 1, n);
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertionSort(arr, 0, arr.size());
    for (auto el : arr) {
        cout << el << " "; 
    }
    return 0;
}