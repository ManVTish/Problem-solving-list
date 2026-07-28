#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1, 3, 4, 2, 2}; // {3, 1, 3, 4, 2}; //{1, 3, 4, 2, 3};
	std::vector<int> freq(v.size() + 1, 0);

	for(int i=0; i<freq.size(); i++){
		if(freq[v[i]] == 0){
			freq[v[i]] += 1;
		} else {
			cout<<"Duplicate number: "<<v[i];
		}
	}

	return 0;
}

/*
v = {1, 3, 4, 2, 3}
freq = {0, 0, 0, 0, 0, 0}

0 -> v[0] -> 1 ; freq = {0, 1, 0, 0, 0, 0}
1 -> v[1] -> 3 ; freq = {0, 1, 0, 1, 0, 0}
2 -> v[2] -> 4 ; freq = {0, 1, 0, 1, 1, 0}
3 -> v[3] -> 2 ; freq = {0, 1, 1, 1, 1, 0}
4 -> v[4] -> 3 ; freq = {0, 1, 1, 1, 1, 0}
*/
