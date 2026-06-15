#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Selection Sort
	int arr[6] = {2,5,1,6,3,0};
	for(int i=0; i<5; i++){
		int minpos = i;
		for(int j=i+1; j<6; j++){
			if(arr[j] < arr[minpos]){
				minpos = j;
			}
		}

		if(minpos != i){
			int swap = arr[i];
			arr[i] = arr[minpos];
			arr[minpos] = swap;
		}
	}

	for(int i=0; i<6; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
