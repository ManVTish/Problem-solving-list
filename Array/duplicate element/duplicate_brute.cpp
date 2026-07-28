#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {3, 1, 3, 4, 2};

	sort(v.begin(), v.end());

	for(int i=0; i<v.size()-1; i++){
		if(v[i] == v[i+1]){
			cout<<"Duplicate element: "<<v[i];
		}
	}

	return 0;
}
