#include <bits/stdc++.h>
using namespace std;

bool checkTwoChessboards(string c1, string c2){
    int sum1 = c1[0] + c2[0]; 
    int sum2 = c1[1] + c2[1]; 

    if ((sum1 + sum2) % 2 == 0) {
        return true;
    } 
    return false;
}

int main(){
    bool result = checkTwoChessboards("a1", "c3");
    cout << result;
}