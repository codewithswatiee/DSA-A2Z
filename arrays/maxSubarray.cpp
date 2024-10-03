#include <bits/stdc++.h>
using namespace std;


// optimal if the array has negatives as well as positives but incase of positives it's a better solution with time complexity of O(n);
// int findMaxLen(vector<int> &a, long long k){
//     int n = a.size();
//     int maxLen = 0;
//     long long sum = 0;
//     map<long long, int> preSumMap;
//     for(int i = 0; i < n; i++){
//         sum += a[i];
//         if(sum == k){
//             maxLen = max(maxLen, i+ 1);
//         }
//         long long rem = sum - k;
//         if(preSumMap.find(rem) != preSumMap.end()){
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }
//         if(preSumMap.find(sum) == preSumMap.end()){
//             preSumMap[sum] = i;
//         }
//     }
//     for(auto pre: preSumMap){
//         cout << pre.first << "->" << pre.second << endl;
//     }
//     return maxLen;
// }


// this is the optimal solution with the time complexity of O(2N) and space complexity of O(1) if the number given in the array are positive and zero.
int findMaxLen(vector<int> &a, long long k){
    int n = a.size();
    int i = 0;
    int j = 0;
    int sum = a[0];
    int maxLen = 0;
    while(j < n){
        while(i <= j && sum > k){
            sum -= a[i];
            i++;
        }
        if(sum == k){
            maxLen = max(maxLen, j - i + 1);
        }
        j++;
        if(j < n){
            sum += a[j];
        }
    }
    return maxLen;

}

int main(){
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    long long k = 15;
    int maxiLen = findMaxLen(arr, k);
    cout << maxiLen << endl;
}