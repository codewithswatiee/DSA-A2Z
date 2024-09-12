#include <bits/stdc++.h>
using namespace std;

void p21(int n){
    int space = n - 2;
    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            for(int j = 0; j < n; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0; j < 1; j++){
                cout << "*";
            }
            for(int s = 0; s < space; s++){
                cout << " ";
            }
            for(int j = 0; j < 1; j++){
                cout << "*";
            }
        }
        cout << endl;
    } 
}

int main(){
    p21(8);
    return 0;
}