#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<std::vector<int>> v = {{1, 2, 4}, {6, 7, 8}, {9, 10, 34}};
	//{{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	bool f = false;
	int target = 78;
	int r=3, c=4;
	int row=0, col=0;

    int i=0, j=(r*c - 1);
	while(i <= j){
		row = i/c; col = i%c;
		if(v[row][col] == target){
			f = true;
			break;
		}

		row = j/c; col = j%c;
		if(v[row][col] == target){
			f = true;
			break;
		}

		i++; j--;
	}

	if(f){
		cout<<"True";
	} else {
		cout<<"False";
	}

	return 0;
}
