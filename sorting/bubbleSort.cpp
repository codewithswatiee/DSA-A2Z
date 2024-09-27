#include <bits/stdc++.h>
using namespace std;


// understanding the approach here:
/*
    First we created a swap function to swap the elements of the array.
    Then we used the swap function to swap the elements of the array in the BubbleSort function.
    Now, In the bubbleSort function we will take array as the input.
*/
void swap(vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


/*
    Explaining bubbleSort function:
    n is the size of array.
    the first loop indicates till where the elements have been sorted and the inner loop loops over till i (i.e element just before the now sorted array.)
    didSwap is the flag which is used so that if whenever the swap doesn't happen the loop ends to reduce the time complexity of the program.
*/
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
