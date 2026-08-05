#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {7, 0, 0, 1, 7, 7, 2, 7, 7}; //{2, 2, 1, 1, 1, 2, 2};
	int cnt = 1;
	sort(v.begin(), v.end()); // {1, 1, 1, 2, 2, 2, 2}

	for(int i=0; i<v.size()-1; i++){
		if(v[i]==v[i+1]){
			cnt++;
			if(cnt > v.size()/2){
				cout<<v[i];
				break;
			}
		} else {
			cnt = 1;
		}
	}

	return 0;
}
