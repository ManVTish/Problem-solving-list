#include <bits/stdc++.h>
using namespace std;

void merge(std::vector<int> &v, int l, int m, int r){
	int left_mark = l;
	int right_mark = m+1;

	std::vector<int> temp;
	while(left_mark <= m && right_mark <= r){
		if(v[left_mark] <= v[right_mark]){
			temp.push_back(v[left_mark]);
			left_mark++;
		} else {
			temp.push_back(v[right_mark]);
			right_mark++;
		}
	}

	while(left_mark <= m){
		temp.push_back(v[left_mark]);
		left_mark++;
	}

	while(right_mark <= r){
		temp.push_back(v[right_mark]);
		right_mark++;
	}

	for(int i=l; i<=r; i++){
		v[i] = temp[i-l];
	}
}


int countPairs(std::vector<int> &v, int l, int m, int r){
	int cnt = 0;
	int mid_mark = m+1;
	for(int i=l; i<=m; i++){
		while(mid_mark <= r && v[i] > 2*v[mid_mark]){
			mid_mark++;
		}
		cnt += mid_mark - (m+1);
	}
	return cnt;
}


int countReverse(std::vector<int> &v, int l, int r){
	int cnt = 0;
	if(l>=r){
		return cnt;;
	}
	int m = (l+r)/2;
	cnt += countReverse(v, l, m);
	cnt += countReverse(v, m+1, r);
	cnt += countPairs(v,l,m,r);
	merge(v, l, m, r);

	return cnt;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v = {1,2,3,4,5,6}; //{1,3,2,3,1};

	int pairs_count = countReverse(v, 0, v.size()-1);
	cout<<pairs_count;

	return 0;
}
