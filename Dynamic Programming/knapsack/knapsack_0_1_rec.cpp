#include <bits/stdc++.h>
using namespace std;

int knapsack(std::vector<int> &wt, std::vector<int> &v, int N, int W){
	if(N==0 || W==0){
		return 0;
	}

	if(wt[N-1] <= W){
		return max(v[N-1] + knapsack(wt, v, N-1, W - wt[N-1]),
			knapsack(wt, v, N-1, W));
	} else {
		return knapsack(wt, v, N-1, W);
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	std::vector<int> v = {60, 100, 120};
	std::vector<int> wt = {10, 20, 30};

	int W = 50;

	int max_val = knapsack(wt, v, v.size(), W);
	cout<<max_val;

	return 0;
}
