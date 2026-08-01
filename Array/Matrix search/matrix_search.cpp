#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<std::vector<int>> v = {{1, 2, 3, 4}, {5, 7, 8, 9}, {10, 11, 12, 13}};
	int target = 8;
	bool f = false;

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			if(v[i][j] == target){
				cout<<"True";
				f = true;
				break;
			}
		}
		if(f) {
			break;
		}
	}

	return 0;
}

