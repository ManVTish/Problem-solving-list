#include <bits/stdc++.h>
using namespace std;

void mergeArr(std::vector<int> &v, int l, int m, int r){
	int n1 = m-l + 1;
	int n2 = r-m;
	std::vector<int> t1(n1, -1);
	std::vector<int> t2(n2, -1);

	for(int i=0; i<n1; i++){
		t1[i] = v[l+i];
	}

	for(int i=0; i<n2; i++){
		t2[i] = v[m+1+i];
	}

    int i=0, j=0, k=l;
	while(i<n1 && j<n2){
		if(t1[i]<t2[j]){
			v[k] = t1[i];
			i++;
		} else {
			v[k] = t2[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		v[k] = t1[i];
		i++; k++;
	}

	while(j<n2){
		v[k] = t2[j];
		j++; k++;
	}
}

void mergeSort(std::vector<int> &v, int l, int r){
	if(l >= r)
		return;

	int m = l + (r-l)/2;
	mergeSort(v, l, m);
	mergeSort(v, m+1, r);

	mergeArr(v, l, m, r);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {5,4,3,1,2};

	mergeSort(v, 0, v.size()-1);

	for(auto &x : v){
		cout<<x<<" ";
	}

	return 0;
}
