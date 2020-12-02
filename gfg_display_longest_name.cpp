#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string large=" ";
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(s[i].length()<s[j].length()){
	                large = s[j];
	            }
	        }
	    }
	    cout<<large<<endl;
	}
	return 0;
}
