#include <bits/stdc++.h>
using namespace std;

long powerExp(long x, int n){
	if(n==0){
		return 1.0;
	}
	if(n==1){
		return x;
	}
	return x * powerExp(x, n-1);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	double x = 2.000;
	int n = 9;

	double res = powerExp(x, n);
	if(n<0){
		res = 1/res;
	}
	cout<<res;

	return 0;
}
