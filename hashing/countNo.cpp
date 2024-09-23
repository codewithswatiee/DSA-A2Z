#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;
    
    vector<int> arr(len); // Use vector for dynamic array
    for(int i = 0; i < len; i++) {
        cin >> arr[i]; // Taking input for the array
    }
    
    // Pre-compute frequency of elements
    int hash[12] = {0}; // Array for storing frequencies of elements from 0 to 11
    for(int i = 0; i < len; i++) {
        if(arr[i] < 12) // Ensure the index is within the hash array bounds
            hash[arr[i]]++;
    }
    
    int q;
    cin >> q;
    
    while(q--) {
        int num;
        cin >> num;
        if(num < 12) // Ensure the query is within bounds
            cout << hash[num] << endl;
        else
            cout << "0" << endl; // For numbers outside the range, return 0 frequency
    }
}
