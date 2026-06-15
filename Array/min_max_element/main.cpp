#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int arr[] = {23,3,5,-1,3,6,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for(int i=0; i<n; i++){
    	max_element = max(arr[i], max_element);
    	min_element = min(arr[i], min_element);
    }

    cout<<"Max element is "<<max_element<<"\n";
    cout<<"Min element is "<<min_element;

	return 0;
}