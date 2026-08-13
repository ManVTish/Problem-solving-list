#include <bits/stdc++.h>
using namespace std;

// Top Down Approach
int knapsack(std::vector<int> wt, std::vector<int> v, int N, int W){
	int t[N+1][W+1];

	for(int i=0; i<N+1; i++){
		for(int j=0; j<W+1; j++){
			if(i==0 || j==0){
				t[i][j] = 0;
			}
		}
	}

	for(int i=1; i<N+1; i++){
		for(int j=1; j<W+1; j++){
			if(wt[i-1] <= j){
				t[i][j] = max(v[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
			} else{
				t[i][j] = t[i-1][j];
			}
		}
	}

	return t[N][W];
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> wt = {10, 20, 30};
	std::vector<int> v = {60, 100, 120};

	int W = 50;

	int max_val = knapsack(wt, v, v.size(), W);
	cout<<max_val;

	return 0;
}
