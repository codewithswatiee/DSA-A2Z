#include <bits/stdc++.h>
using namespace std;


long long i = 2;
vector<long long> factorials = {1};
vector<long long> factorialNumbers(long long n) {
    if(factorials.back() * i <= n){
        factorials.push_back(factorials.back() * i);
        i++;
        factorialNumbers(n);
    }
    return factorials;
}

int main(){
    vector<long long> factorials = factorialNumbers(5);
    for(auto factorial : factorials){
        cout << factorial;
    }
    return 0;
}