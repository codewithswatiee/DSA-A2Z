#include <bits/stdc++.h>
using namespace std;

void p20(int n){
    int space = n*2 - 2;
    for(int i= 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << '*';
        }   
        for(int s= 0; s < space; s++){
            cout << ' ';
        }
        for(int j = 0; j <= i; j++){
            cout << '*';
        }
        space = space - 2;
        cout << endl;
    }
    space = 2;
    for(int i = n -1 ; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        for(int s = 0; s < space; s++){
            cout << ' ';
        }
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        space = space + 2;
        cout << endl;
    }

}
int main(){
    p20(3);
    return 0;
}