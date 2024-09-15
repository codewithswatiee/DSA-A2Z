#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   int noOfq, y, x;
    vector<int> qType;
    vector<int> v;
    set<int> st;
    cin >> noOfq;
    for(int i = 0; i < noOfq; i++){
        cin >> x >> y;
        v.push_back(y);
        qType.push_back(x);
    } 
    for(int i = 0; i < noOfq; i++){
        if(qType[i] == 1){
            cin >> x;
            st.emplace(v[i]);
        } 
        else if(qType[i] == 2){
            auto it = st.find(v[i]);
            if(it != st.end()){
                st.erase(*it);
            }
        } 
        else if(qType[i] == 3){
            auto it = st.find(v[i]);
            if(it == st.end()){
                cout << "No" << endl;
            } else{
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}



