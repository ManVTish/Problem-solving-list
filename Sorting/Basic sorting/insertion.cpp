#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    
    // INSERTION SORT
	int arr[6]={2,8,1,3,9,4};

    // #1
	for(int i=1; i<6; i++){
		int j=i;
		while(j>0 && arr[j] < arr[j-1]){
			int swap = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = swap;
			j-=1;
		}
	}

    // #2
	// for(int i=1; i<6; i++){
	// 	for(int j=i;j>=0; j--){
	// 		if(arr[j] < arr[j-1]){
	// 			int swap = arr[j];
	// 			arr[j] = arr[j-1];
	// 			arr[j-1] = swap;
	// 		}
	// 	}
	// }

    for(int i=0; i<6; i++){
    	cout<<arr[i]<<" ";
    }

	return 0;
}
