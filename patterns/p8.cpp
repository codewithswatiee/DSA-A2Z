#include <bits/stdc++.h>
using namespace std;

void p8(int n){
    for(int i = n; i > 0;i--){
        for(int s = n-i; s > 0 ; s--){
            cout << " ";
        }
        for(int j = 0; j < 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    p8(5);
    return 0;
}