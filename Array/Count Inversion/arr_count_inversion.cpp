#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1,2,3,4,5}; //{5,4,3,2,1}; // {5,3,2,1,4};
	int res = 0;

	for(int i=0; i<v.size()-1; i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[j] < v[i]){
				res += 1;
			}
		}
	}

	cout<<res;

	return 0;
}
