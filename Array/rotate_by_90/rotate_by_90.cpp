#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int r,c;
    cin>>r>>c;
	int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	std::vector<pair<int,int>> v;


	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			int element;
			cout<<arr[i][j]<<" "*();
		}
		cout<<"\n";
	}

	cout<<"\n";

	for(int i=0; i<c; i++){
		for(int j=r-1; j>=0; j--){
			cout<<arr[j][i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
