#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[0];
    for(int i=1; i<n; i++){
    	arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int x:arr){
    	cout<<x<<" ";
    }
    cout<<endl;

    int arr1[] = {1,2,3,4,5,6,7};

    temp = arr1[n-1];
    for(int i=n; i>0; i--){
    	arr1[i] = arr1[i-1];
    }
    arr1[0] =  temp;

    for(int x:arr1){
    	cout<<x<<" ";
    }

	return 0;
}