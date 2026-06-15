#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    string str;
    getline(cin, str);

    int len = str.length();

    /* Reverse string by printing backwards */

    // for(int i=len-1; i>=0; i--){
    // 	char temp = str[i];
    // 	cout<<temp<<" ";
    // }


    for(int i=0; i<len/2; i++){
    	char temp = str[i];
    	str[i] = str[len-i-1];
    	str[len-i-1] = temp;
    }

    cout<<str;

    //OR

    // for(char x:str){
    // 	cout<<x<<" ";
    // }

	return 0;
}