#include <bits/stdc++.h>
using namespace std;


// Optimised Approach!
int largest(vector<int> &arr) {
        int n = arr.size();
        int max = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] >= max){
                max = arr[i];
            }
        }
        return max;
    }