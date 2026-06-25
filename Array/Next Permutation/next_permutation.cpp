#include <bits/stdc++.h>
using namespace std;

void printNextPerm(std::vector<int> v){
	for(auto& x : v){
		cout<<x<<" ";
	}
	cout<<"\n";
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	/*
	INPUT: [1,3,2]
	OUPUT: [2,1,3] -> next greater permutation

	INPUT: [2,1,4,3]
	OUTPUT: [2,3,1,4]

	std lib: sort(begin, end iterator), next_permuation(begin, end iterator)
	*/

    std::vector<int> arr = {1,3,2}, num;

    num = arr;
    sort(arr.begin(), arr.end());

    for(auto& x: arr){
    	cout<<x<<" ";
    }
    cout<<"\n"<<"\n";

	std::vector<std::vector<int>> v;

	do{
		v.push_back(arr);
	} while(next_permutation(arr.begin(), arr.end()));


	for(auto& p : v){
		for(auto& x: p){
			cout<<x<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";

	for(int i=0; i < v.size(); i++){
		if(v.at(i) == num){
			if(i == v.size()-1){
				printNextPerm(v.at(0));
				break;
			}
			printNextPerm(v.at(i+1));
		}
	}

	return 0;
}
