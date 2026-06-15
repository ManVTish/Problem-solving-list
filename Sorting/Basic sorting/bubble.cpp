#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// BUBBLE SORT
	int arr[] = {3,2,9,4,1,8}; // 1 2 3 4 8 9
	int j=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5-i; j++){
			if(arr[j] > arr[j+1]){
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
		    }
		}
	}

	for(int i=0; i<6; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
