#include <bits/stdc++.h>
using namespace std;

void p22(int n){
    for(int i = 0; i < n; i++){
        int N = n;
        for(int j = 0 ; j <= i; j++){
            for(int k = N; k >= N - i; k--){
                cout << N;
            }
        }
        for(int j = i+1; j < n; j++){
            cout << n - i;
        }
        cout << endl;
    }
}

int main(){
    p22(5);
    return 0;
}