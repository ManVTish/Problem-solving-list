#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    //std::vector<int> v = {2, 3, -8, 7, -1, 2, 3};
    std::vector<int> v = {2, 3, 5, -2, 7, -4};
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0; i<v.size(); i++){
    	curr_sum += v[i];
    	max_sum = max(max_sum, curr_sum);
    	if (curr_sum < 0) {
    		curr_sum = 0;
    	}
    }

    cout<<max_sum;

    // for(int i=0; i<v.size(); i++){
    // 	cout<<v[i]<<" ";
    // }

    // for(auto &x : v){
    // 	cout<<x<<" ";
    	
    // }

	return 0;
}
