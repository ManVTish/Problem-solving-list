#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int arr2[] = {1,1,2,5,5,7,8,9};
    int arr1[] = {1,3,5,5,9};
    vector<int> v1, v2;

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int l = (n1>=n2) ? n1 : n2;
    int s = (n1<=n2) ? n1 : n2;

    // array intersection
    for(int j=0; j<s; j++){
    	for(int i=0; i<l; i++){

    		if(n1 >=  n2){

    		  if(arr2[j] == arr1[i]){
    		  	v1.push_back(arr1[i]);
    			break;
    		  }
    		}else{

    		  if(arr2[i] == arr1[j]){
    			v1.push_back(arr1[j]);
    			break;
    		  }
    		}
    	}
    }

    cout<<"Array intersection: ";

    for(int x: v1){
    	cout<<x<<" ";
    }
    cout<<endl;

    for(int a1: arr1){
    	v2.push_back(a1);
    }
    for(int a2: arr2){
    	v2.push_back(a2);
    }

    for(int j=0; j<v1.size(); j++){
      for(int i=0; i<v2.size(); i++){

      	if(v1[j] == v2[i]){
      		v2.erase(v2.begin() + i);
      		break;
      	}
      }
    }

    sort(v2.begin(), v2.end());

    cout<<"Array union: ";

    for(int x: v2){
    	cout<<x<<" ";
    }

	return 0;
}