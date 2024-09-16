#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
    int count = 0;
    int n = N;
    while(N > 0){
        int lastDigit = N % 10;
        if(lastDigit!= 0 && n % lastDigit == 0){
            count = count + 1;
        }
        N = N / 10;
    }
    return count;
}

int main(){
    int N = 22074;
    int count = evenlyDivides(N);
    cout << count;
    return 0;
}