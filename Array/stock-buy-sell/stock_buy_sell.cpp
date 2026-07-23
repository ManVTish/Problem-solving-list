#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    // Approach 1
	std::vector<int> v = {7,1,5,3,6,4};
	//std::vector<int> v = {7,6,4,3,1};
	auto min_value = min_element(v.begin(), v.end());
	int index = distance(v.begin(), min_value);
	auto max_value = max_element(v.begin() + index, v.end());
	cout<<*max_value - *min_value;

	cout<<"\n";

    // Approach 2
    int profit = 0;
	for(int i=0; i<v.size()-1; i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[j] > v[i]){
				profit = max(profit, v[j] - v[i]);
			}
		}
	}
	cout<<profit;

	return 0;
}
