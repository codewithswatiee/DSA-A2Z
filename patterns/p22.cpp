#include <bits/stdc++.h>
using namespace std;

void p22(int n){
    for(int i =0; i < 2*n-1; i++){
        for(int j=0; j< 2*n-1;j++){
            int top = i;
            int bottom = j;
            int left = (2*n-2)-i;
            int right = (2*n-2)-j;
            cout << (n - min(min(top, bottom), min(left, right))) << ' ';
        }
        cout << endl;
    }

}

int main(){
    p22(5);
    return 0;
}