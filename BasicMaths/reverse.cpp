#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int reverse = 0;
        while(x > 0){
            int lastD = x % 10;
            reverse = (reverse * 10) + lastD;
            x = x / 10;
        }
        if(reverse == x){
            return true;
        }
        return false;
}

int main(){
    int n = 121;
    cout << isPalindrome(n);
}
