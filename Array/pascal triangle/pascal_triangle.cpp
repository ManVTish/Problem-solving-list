#include <bits/stdc++.h>
using namespace std;

void pascal(int n){
	if(n==0){
		return;
	}
	if(n==1){
		cout<<1<<" ";
		pascal(n-1);
	}

	pascal(n-1);
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int N, r, c;
	cin>>N>>r>>c;

	std::vector<std::vector<int>> v;

    // if(N==1){
    // 	v.push_back({1});
    // }
    // if(N==2){
    // 	v.push_back({1});
    // 	v.push_back({1,1});
    // }

    for(int i=0; i<N; i++){
    	std::vector<int> row(i + 1, 1);

    	if(i>1){
    		for(int j=1; j<i; j++){
    			row[j] = v[i-1][j-1] + v[i-1][j];
    		}
    	}
    	v.push_back(row);
    }


	for(auto& p : v){
		for(int i=0; i<p.size(); i++){
			cout<<p[i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
