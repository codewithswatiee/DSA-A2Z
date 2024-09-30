#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2){
    vector<int> mergedArray;
    int i = 0;
    int j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(mergedArray.size() == 0 || mergedArray.back() != arr1[i]){
                mergedArray.push_back(arr1[i]);
            }
            i++;
        } else{
            if(mergedArray.size() == 0 || mergedArray.back() != arr2[j]){
                mergedArray.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j < n2){
        if(mergedArray.size() == 0 || mergedArray.back() != arr2[j]){
            mergedArray.push_back(arr2[j]);
        }
        j++;
    }
    while(i < n1){
        if(mergedArray.size() == 0 || mergedArray.back() != arr1[i]){
            mergedArray.push_back(arr1[i]);
        }
        i++;
    }

    return mergedArray;
}

int main(){
    vector<int> a ={1, 2, 3, 4, 5};
    vector<int> b = {2, 4, 6, 8, 10};
    vector<int> c = unionArray(a, b);
    for(auto el: c){
        cout << el << " ";
    }
    return 0;
}