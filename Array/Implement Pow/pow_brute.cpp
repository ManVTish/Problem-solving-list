#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	float x = 2.000;
	int n = -2;
	long double res=1;
	for(int i=1; i<=abs(n); i++){
		res *= x;
	}

	if(n<0){
		res = 1/res;
	}

	cout<<res;

	return 0;
}
