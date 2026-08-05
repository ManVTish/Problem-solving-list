#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {7, 0, 0, 1, 7, 7, 2, 7, 7};
	std::vector<int> v1(v.size()/2,0);
	int elem=0, count=0;

	for(int i=0; i<v.size()-1; i++){
		int cnt = 1;
		for(int j=i+1; j<v.size(); j++){
			if(v[i] == v[j]){
				cnt++;
			}

			if(cnt > v.size()/2){
				cout<<v[i];
				break;
		    }
		}
	}

	return 0;
}
