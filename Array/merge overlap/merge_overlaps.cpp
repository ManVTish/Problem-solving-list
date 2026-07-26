#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<std::vector<int>> v = {{1,3}, {2,6}, {8,10}, {15,18}};
	std::vector<std::vector<int>> res;

	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); ){
		int start = v[i][0];
		int end = v[i][1];

		int j = i+1;
		while(j<v.size() && v[j][0] <= end){
			end = v[j][1];
			j++;
		}

		res.push_back({start, end});

		i = j;
	}


	for(auto &x : res){
		for(auto &y : x){
			cout<<y<<" ";
		}
		cout<<" ";
	}

	return 0;
}
