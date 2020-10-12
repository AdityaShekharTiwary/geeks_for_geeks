#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t, n, i;
	cin >> t;
	while(t>0){
	    cin >> n;
	    string s;
	    cin >> s;
	    int count = 0;
	    for(i=0; i<n; i++){
	        if(s[i] == '1'){
	            count++;
	        }
	    }
	    long int result;
	    result = (count*(count-1))/2;
	    cout << result << endl;
	    t--;
	}
	return 0;
}
