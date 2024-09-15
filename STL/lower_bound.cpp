#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, x, q;
    vector<int> v;
    vector<int> queries;
    cin >> size;
    for(int i=0; i < size; i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> q;
    for(int i =1; i <= q; i++){
        cin >> x;
        queries.push_back(x);
    }
    for(int i = 0; i < q; i++){
        int index = lower_bound(v.begin(), v.end(), queries[i]) - v.begin();
        auto present = lower_bound(v.begin(), v.end(), queries[i]);
        if(present == v.end() || *present != queries[i]){
            cout << "No " << index + 1 << endl;
        } else{
            cout << "Yes " << index + 1 << endl;
        }
    }
    return 0;
}
