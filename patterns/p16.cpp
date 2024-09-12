#include <bits/stdc++.h>
using namespace std;

void p16(int n){
    char ch = 'A';
    for(int i= 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
int main(){
    p16(5);
    return 0;
}