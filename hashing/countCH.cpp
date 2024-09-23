#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hash[25] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++ ;
    }

    int q;
    cin >> q;
    while (q--) {
        char s;
        cin >> s;
        cout << hash[s - 'a'] << endl;
    }

}
