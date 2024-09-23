#include <bits/stdc++.h>
using namespace std;

int multiply(int a, int b){
    if(a == 0 || b == 0) return 0;
    if(a == 1) return b;
    if(b == 1) return a;

    int halfProduct = multiply(a , b / 2);
    if(b % 2 == 0) return 2 * halfProduct;
    return a + (2 * halfProduct);
}

int main(){
    int product = multiply(2, 8);
    cout << product << endl;
}