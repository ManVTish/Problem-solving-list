#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {0,0,1,2,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	int j=n-1;
	int t=0;

	for(int i=0; i<j; i++){

		t = i+1;
		while(t < j){

			if(arr[t] == 0){
				int temp = arr[i];
				arr[i] = arr[t];
				arr[t] = temp;
				i++;
			}

			if(arr[t] == 2){
				int temp = arr[j];
				arr[j] = arr[t];
				arr[t] = temp;
				j--;
			}

			t++;
		}
	}

	for(int x:arr){
		cout<<x<<" ";
	}

	return 0;
}