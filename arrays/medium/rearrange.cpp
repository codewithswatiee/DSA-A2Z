#include <bits/stdc++.h>
using namespace std;


// variety 1 : pos == neg
// vector<int> rearrange(vector<int> &arr){
//     vector<int> result;
//     int n = arr.size();
//     int posIndex = 0; int negIndex = 1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] < 0){
//             result[negIndex] = arr[i];
//             negIndex += 2;
//         } else{
//             result[posIndex] = arr[i];
//             posIndex += 2;
//         }
//     }
//     return result;
// }

vector<int> rearrange(vector<int> &arr){
    vector<int> pos, neg;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        } else{
            neg.push_back(arr[i]);
        }
    }
    if(neg.size() < pos.size()){
        for(int i = 0; i < neg.size(); i++){
            arr[2* i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++){
            arr[index] = pos[i];
            index++;
        }
    } else{
        for(int i = 0; i < pos.size(); i++){
            arr[2* i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++){
            arr[index] = neg[i];
            index++;
        }
    }
    return arr;
}
int main(){
    vector<int> someArr = {3, 1, -2, -2, 2, -4, 3, 4, 1, 4, 2, -2};
    vector<int> result = rearrange(someArr);
    for(auto el: result){
        cout << el << " ";
    }
    return 0;
}