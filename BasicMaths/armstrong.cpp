#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	int original = n;
	int count = 0;
	int sum = 0;
	vector<int> lastDigit;
	while(n > 0){
		lastDigit.push_back(n%10);
		n = n/10;
		count++;
	}
	for(auto lds : lastDigit){
		sum += pow(lds, count);
	}
	if(sum==original) return true;
	return false;
}
