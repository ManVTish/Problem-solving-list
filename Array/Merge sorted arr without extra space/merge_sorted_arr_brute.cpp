#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v1(7); v1 = {-5, -2, 4, 5};
	std::vector<int> v2 = {-3, 1, 8};

    int i=0, j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i] > v2[j]){
			int t = v1[i];
			v1[i] = v2[j];
			v2[j] = t;

			sort(v2.begin(), v2.end());
		}
		i++;
	}
	v1.insert(v1.end(), v2.begin(), v2.end());

	for(auto &x : v1){
		cout<<x<<" ";
	}

	return 0;
}
