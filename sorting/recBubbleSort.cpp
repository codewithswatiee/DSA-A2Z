#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubble_sort(vector<int> arr, int n){
    if(n == 1) return;
    int didSwap = 0;
    for(int j = 0; j <= n - 2; j++){
        if(arr[j] > arr[j + 1]){
            swap(arr, j, j + 1);
            didSwap = 1;
        }
    }
    if(didSwap == 0) return;
    bubble_sort(arr, n - 1 );
}

