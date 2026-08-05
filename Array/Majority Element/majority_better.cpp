#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {7, 0, 0, 1, 7, 7, 2, 7, 7}; // {2, 2, 1, 1, 1, 2, 2};
	unordered_map<int, int> map;

	for(int num:v){
		map[num]++;
	}

	for(auto &pair:map){
		if(pair.second > (v.size()/2)){
			cout<<pair.first;
			break;
		}
	}

	return 0;
}



