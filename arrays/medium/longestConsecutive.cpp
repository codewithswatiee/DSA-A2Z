#include <bits/stdc++.h>
using namespace std;


int longestConc(vector<int> &arr){
    int n = arr.size();
    if(n==0) return 0;
    int longest = 1;

    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    } //O(N)

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                cnt = cnt+1;
            } //!O(N)
            longest = max(longest, cnt);
        }
    } //O(2N) because we are starting from everyone we are just starting from every first ele.
    return longest;
}
int main()
{
    
    return 0;
}