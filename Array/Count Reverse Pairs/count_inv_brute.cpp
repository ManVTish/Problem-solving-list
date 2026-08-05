#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1,3,2,3,1}; //{3,2,1,4};
	int cnt = 0;

	for(int i=0; i<v.size()-1; i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[i]>2*v[j]){
				cnt++;
			}
		}
	}

	cout<<cnt;

	return 0;
}
