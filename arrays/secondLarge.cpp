#include <bits/stdc++.h>
using namespace std;

// Brute Force approach : 

// void swap(vector<int>& arr, int a, int b) {
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

// int partitionIndex(vector<int>& arr, int low, int high){
//     int pivot = arr[low];
//     int i = low ;
//     int j = high;
//     while(i < j){
//         while(arr[i] <= pivot && i <= high - 1){
//             i++;
//         }
//         while(arr[j] > pivot && j >= low + 1){
//             j--;
//         }
//         if(i < j){
//             swap(arr, i, j);
//         }
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }

// void quickSort(vector<int>& arr, int low, int high){
//     if(low < high){
//         int partition_index = partitionIndex(arr, low, high);
//         quickSort(arr, low, partition_index - 1);
//         quickSort(arr, partition_index + 1, high);
//     }
// }

// int secondLargest(vector<int> &arr){
//     int n = arr.size() - 1;
//     quickSort(arr, 0, n);
//     for(int i = n - 1; i >= 0; i--){
//         if(arr[i] != arr[n]) return arr[i];
//         return -1;
//     } 
// }

// Better solution:

// int secondLargest(vector<int> &arr){
//     int max = arr[0];
//     int secLargest = -1;
//     for(int i = 1; i < arr.size(); i++){
//         if(arr[i] >= max){
//             max = arr[i];
//         }
//     }
//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] < max && secLargest < arr[i]){
//             secLargest = arr[i];
//         }
//     }
//     return secLargest;
// }


// Optimal Solution:
// Takes O(n) Time
int secondLargest(vector<int> &arr){
    int largest = arr[0];
    int secLargest = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > secLargest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}

int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 12};
    int seclargest = secondLargest(arr);
    cout << seclargest;
}