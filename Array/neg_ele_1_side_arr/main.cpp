#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int arr[] = {3,-4,5,0,-1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int t=0;
    while(arr[t]<0){
    	t++;
    }

    for(int i=1; i<n; i++){

    	if(arr[i] < 0){
    		int temp = arr[i];
    		arr[i] = arr[t];
    		arr[t] = temp;
    		t++;
    	}
    }

    for(int x:arr){
    	cout<<x<<" ";
    }

	return 0;
}