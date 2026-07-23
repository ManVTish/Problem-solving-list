#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1, 0, 2, 1, 0};
	for(int i=0; i<v.size()-1; i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[i] > v[j]){
				int t = v[i];
				v[i] = v[j];
				v[j] = t;
			}
		}
	}

	for(auto &x : v){
		cout<<x<<" ";
	}

	return 0;
}
