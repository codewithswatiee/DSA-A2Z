#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void moveZero(vector<int> &arr){
    int n = arr.size();
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return;
    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr, i, j);
            j++;
        }
    }

}

int main(){
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZero(arr);
    cout << "Array after moving zeros: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

}