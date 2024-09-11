#include <bits/stdc++.h>
using namespace std;


void p12(int n){
    for( int i = 1; i < n+1; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int s=1; s <= 2*(n-i); s++){
            cout << " ";
        }
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    p12(4);
    return 0;
}