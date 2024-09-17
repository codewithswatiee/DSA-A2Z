#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i * (n/i);
    }
    return sum;
}

int main(){
    int sum = sumOfAllDivisors(5);
    cout << sum;
    return 0;
}