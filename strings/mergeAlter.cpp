#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2) {
        string word3;
        for(int i = 0; i < min(word1.length(), word2.length()); i++){
            word3 = word1[i] + word2[i];        
        }
        cout << word3;
}

int main(){
    mergeAlternately("abc", "pqr");
}