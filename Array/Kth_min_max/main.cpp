#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {2,2,1,9,4,8,4,3,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	int k;
	cin>>k;

	// bubble sorting
	for(int i=0; i<n; i++){

		for(int j=1; j<n-i; j++){

			int temp = 0;
			if (arr[j] < arr[j-1]){

				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}

	for(int x:arr){
		cout<<x<<" ";
	}
	cout<<"\n";


	if(k==1){

		cout<<"Kth min element: "<<arr[k-1]<<"\n";
		cout<<"Kth max element: "<<arr[n-1];
	}else{

        int t=1;
        int i=1;
		while(t!=k){
			
			if(arr[i] == arr[i-1]){
				
				i++;
			}else{

				t++;
				if(t==k)
					break;
				i++;
			}
		}

		cout<<"Kth min element: "<<arr[i]<<"\n";

		int j=n-2;
		t=1;
		while(t!=k){

			if(arr[j] == arr[j+1]){

				j--;
			}else{

				t++;
				if(t==k)
					break;
				j--;
			}
		}
		cout<<"Kth max element: "<<arr[j];
	}

	return 0;
}