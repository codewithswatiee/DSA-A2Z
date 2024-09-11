#include <bits/stdc++.h>
using namespace std;

void p7(int n){
    for(int i= 0; i < n;i++){
        for(int s = 0; s < n -i -1; s++){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    p7(5);
    return 0;
}