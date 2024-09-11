#include <bits/stdc++.h>
using namespace std;


void p10(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    p10(5);
    return 0;
}