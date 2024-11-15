#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int> &prices){
    int n = prices.size();
    int mini = prices[0];
    int maxProfit = 0;
    for(int i = 1; i < n; i++){
        int cost = prices[i] - mini;
        maxProfit = max(cost, maxProfit);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}
int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = maxProfit(prices);
    cout << "Maximum possible profit is " << profit << endl;
    return 0;
}