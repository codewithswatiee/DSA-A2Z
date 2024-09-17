#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n == 0 || arr[0] == 0) return -1; // Return -1 if no jumps are possible
    int jumps = 0;
    int farthest = 0;
    int currentEnd = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]); // Find the farthest point reachable
        if (i == currentEnd) { // If we have reached the end of the current range
            jumps++;
            currentEnd = farthest; // Update the end of the range
            if (currentEnd >= n - 1) {
                return jumps; // Return jumps if we can reach or exceed the end
            }
        }
    }

    return -1; // If we exit the loop, return -1 indicating it's not possible
}


int main(){
    vector<int> arr = {1, 4, 3, 2, 6, 7};
    int minJ = minJumps(arr);
    cout << minJ;
    return 0;
}