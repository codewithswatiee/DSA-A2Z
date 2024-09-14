#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    int x;
    vector<int> v;
    for(int i = 1; i <= size; i++){
        cin >> x;
        v.push_back(x);
    }
    int q1;
    cin >> q1;
    int q2, q3;
    cin >> q2 >> q3;
    v.erase(v.begin()+q1 -1);
    v.erase(v.begin()+q2-1, v.begin()+q3-1);
    cout << v.size();
    cout << endl;
    for(auto v2: v){
        cout << v2 << " ";
    }
    return 0;
}
