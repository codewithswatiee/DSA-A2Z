#include <bits/stdc++.h>
using namespace std;

void p14(int n){
    int num = 1;
    for(int i= 1; i <= n; i++){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    p14(5);
    return 0;
}