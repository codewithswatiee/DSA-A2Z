#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &a, vector<int> &b){
    vector<int> result;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(a[i] == b[j]){
            result.push_back(a[i]);
            i++;
            j++;
        } else{
            if(a[i] > b[j]){
                j++;
            }
            i++;
        }
    }
    return result;

}

int main(){
    vector<int> a ={1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 8, 10};
    vector<int> c = findIntersection(a, b);
    for(auto el: c){
        cout << el << " ";
    }
    return 0;
}