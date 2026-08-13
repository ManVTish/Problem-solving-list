#include <bits/stdc++.h>
using namespace std;

// Memoization

int knapsack(std::vector<int> &wt, std::vector<int> &v, int N, int W, std::vector<std::vector<int>> t){
	if(N==0 || W==0){
		return 0;
	}

	if(t[N][W] != -1){
		return t[N][W];
	}

	if(wt[N-1] <= W){
		return t[N][W] = max(v[N-1] + knapsack(wt, v, N-1, W-wt[N-1], t),
			  knapsack(wt, v, N-1, W, t));
	} else {
		return t[N][W] = knapsack(wt, v, N-1, W, t);
	}
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> wt = {10, 20, 30};
	std::vector<int> v = {60, 100, 120};

	int W = 50;
	int N = v.size();
	// works with both N+1, N+1
	std::vector<std::vector<int>> t(N+1, std::vector<int>(W+1, -1));

	int max_val = knapsack(wt, v, N, W, t);
	cout<<max_val;

	return 0;
}
