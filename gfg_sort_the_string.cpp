#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int hash[26]={0};
	    for(int i=0;i<s.size();i++){
	        hash[s[i]-'a']++;
	    }
	    for(int i=0;i<26;i++){
	        for(int j=0;j<hash[i];j++){
	            cout<<(char)('a'+i);
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
