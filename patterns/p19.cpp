#include <bits/stdc++.h>
using namespace std;

void p19(int n){
    int space = 0;
    for(int i= 0; i < n; i++){
        for(int j = 0; j < n- i; j++){
            cout << '*';
        }
        for(int s = 0; s < space; s++){
                cout << ' ';
        }
        for(int k = 0; k < n-i; k++){
                cout << '*';
        }
        space = space + 2;
        cout << endl;
    }
    space = n * 2 - 2;
    for(int i= 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << '*';
        }
        for(int s = space; s > 0; s--){
                cout << ' ';
        }
        space = space - 2;
        for(int k = 0; k <= i; k++){
                cout << '*';
            }
        cout << endl;
    }
}

int main(){
    p19(5);
    return 0;
}