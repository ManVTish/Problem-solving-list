#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<std::vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
	/*
	for(int j=0; j<v.size(); j++){
		for(int i=2; i>=0; i--){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
	*/

	for(int i=0; i<v.size(); i++){
		for(int j=i; j<v.size(); j++){
			int t = v[i][j];
			v[i][j] = v[j][i];
			v[j][i] = t;
		}
	}

	// for(int i=0; i<v.size(); i++){
	// 	reverse(v[i].begin(), v[i].end());
	// }

	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v.size()/2; j++){
			int idx = v.size() - j - 1;
			int t = v[i][j];
			v[i][j] = v[i][idx];
			v[i][idx] = t;
		}
	}

	for(auto &x : v){
		for(auto &y : x){
			cout<<y<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

/*

1 2 3           7 4 1
4 5 6    -->    8 5 2
7 8 9           9 6 3

1 2 3           1 4 7             7 4 1
4 5 6    -->    2 5 8      -->    8 5 2
7 8 9           3 6 9             9 6 3

1 2 3 4       -->     4 3 2 1
1 2 3 4 5     -->     5 4 3 2 1

*/


