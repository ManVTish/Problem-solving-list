#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	/*
	## set matrix zero
	  Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
	  (1,1)
      Output: [[1,0,1],[0,0,0],[1,0,1]]

      Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
      (0,0), (0,3)
      Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
	*/

    int r,c;
    cin>>r>>c;
	//int arr[r][c] = {{1,1,1}, {1,0,1}, {1,1,1}};
	int arr[r][c] = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
	std::vector<std::pair<int, int>> v;

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(arr[i][j] == 0){
				v.push_back({i,j});
			}
		}
	}

	for(const auto& p : v){
		int row = p.first;
		int col = p.second;
		for(int i=0; i<c; i++){
			arr[row][i] = 0;
		}

		for(int i=0; i<r; i++){
			arr[i][col] = 0;
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
