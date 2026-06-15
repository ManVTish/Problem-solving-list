#include <bits/stdc++.h>
using namespace std;

void merge_arr(int arrL[], int arrR[], int arr[], int L, int H){
	int i=0, j=0, k=0;
	while(i<L && j<H){
		if(arrL[i] < arrR[j]){
			arr[k] = arrL[i]; k++; i++;
		} else {
			arr[k] = arrL[j]; k++; j++;
		}
	}

	while(i<L){
		arr[k] = arrL[i]; i++; k++;
	}

	while(j<H){
		arr[k] = arrR[j]; j++; k++;
	}
}

void merge_sort(int* arr[], int L, int H){
	if(H-L<=1){
		return;
	}

	int mid = L+(H-L)/2;

	merge_sort(&arr, L, mid);
	merge_sort(&arr, mid+1, H);

    int nL = mid - L;
	int nH = H - mid;
	int arrL[nL];
	int arrR[nH];

	for(int i=0; i<nL; i++){
		arrL[i] = arr[i];
	}

	for(int i=mid; i<nH; i++){
		arrR[i-mid] = arr[i];
	}

	merge_arr(arrL, arrR, arr, nL, nH);
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// MERGE SORT
	int arr[] = {2,8,5,3,9,4,1,7};

	merge_sort(&arr, 0, sizeof(arr)/sizeof(arr[0]));

	for(int i=0; i<8; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
