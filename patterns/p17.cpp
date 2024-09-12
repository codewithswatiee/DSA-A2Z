#include <bits/stdc++.h>
using namespace std;

void p17(int n){
    for(int i= 0; i < n; i++){
        int space = n-i-1;
        for(int s = 0; s < space; s++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <=2*i+1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        for(int s = 0; s < space; s++){
            cout << " ";
        }
        cout << endl;
}
    }
int main(){
    p17(5);
    return 0;
}