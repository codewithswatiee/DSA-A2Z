#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;
    
    int arr[len];
    for(int i = 0; i < len ; i++){
        cin >> arr[i];
    }

    map<int, int> hash;
    for(int i = 0; i < len; i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
}
