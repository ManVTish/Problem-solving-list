#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n/2; i++){
       
       int temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
    }

    for(int x:arr){
    	cout<<x<<" ";
    }

	return 0;
}