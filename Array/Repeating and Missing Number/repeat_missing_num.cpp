#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1, 2, 3, 6, 7, 5, 7}; // {3, 5, 4, 1, 1};
	std::vector<int> frq(v.size() + 1, 0);
	int arr[] = {0,0};

	for(int i=0; i<frq.size(); i++){
		frq[v[i]] += 1;
	}

	for(int i=1; i<frq.size(); i++){
		if(frq[i] == 2){
			arr[0] = i;
		} else if(frq[i] == 0){
			arr[1] = i;
		} else {
			continue;
		}
	}

	cout<<arr[0]<<" "<<arr[1];

	return 0;
}

/*
v = {3, 5, 4, 1, 1}
freq = {0, 0, 0, 0, 0, 0}

freq = {0, 2, 0, 1, 1, 1}


*/
