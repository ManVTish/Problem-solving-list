#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int arr[] = {3,3,6,1};
    int max = 0;
    for(int i=0; i<4; i++){
    	if(arr[i] > arr[max]){
    		max = i;
    	}
    }

    cout<<arr[max];

	return 0;
}