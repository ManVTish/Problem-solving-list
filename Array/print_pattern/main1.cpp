#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	char A[] = {'A', 'B' , 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	// for(int i=n-1; i>0; i--){

	// 	cout<<"*"<<"\n";
	// 	for(int j=; j>=0; j--){
	// 		cout<<"*"<<A[j];
	// 	}
	// 	cout<<"*"<<"\n";
	// }


	for(int j=n-1; j>=0; j--){

		// if(j==n-1){
		// 	for(int t=0; t<n; t++){
		// 		cout<<" ";
		// 	}
		//     cout<<"*"<<"\n";	
		// }

		// for(int t=0; t<n-j; t++){
		// 		cout<<" ";
		// }

		for(int i=0; i<n-j; i++){

			cout<<"*"<<A[j];
		}
		cout<<"*"<<"\n";
	}

	return 0;
}