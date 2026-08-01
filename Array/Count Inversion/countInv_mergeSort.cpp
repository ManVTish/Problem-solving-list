#include <bits/stdc++.h>
using namespace std;

int mergeSort(std::vector<int> &v, int l, int m, int h){
	int n1 = m-l+1;
	int n2 = h-m;
	int cnt = 0;

	std::vector<int> t1(n1, 0);
	std::vector<int> t2(n2, 0);

	for(int i=0; i<t1.size(); i++){
		t1[i] = v[l+i];
	}
	for(int i=0; i<t2.size(); i++){
		t2[i] = v[m+1+i];
	}

	int i=0, j=0, k=l;
	while(i<n1 && j<n2){
		if(t1[i]>t2[j]){
			v[k++] = t2[j++];
			cnt += (n1-i);
		} else {
			v[k++] = t1[i++];
		}
	}

	while(i<n1){
		v[k++]=t1[i++];
	}

	while(j<n2){
		v[k++]=t2[j++];
	}

	return cnt;
}

int countInversion(std::vector<int> &v, int l, int h){
	int cnt=0;
	if(l>=h){
		return cnt;
	}
	int m = (l+h)/2;
	cnt += countInversion(v, l, m);
	cnt += countInversion(v, m+1, h);

	cnt += mergeSort(v, l, m, h);
	return cnt;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {4,3,2,1}; //{5,4,3,1,2};

	int countInv = countInversion(v, 0, v.size()-1);
	cout<<countInv;

	return 0;
}
