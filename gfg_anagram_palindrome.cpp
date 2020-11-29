#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char,int>mp;
	    for(int i=0;i<s.size();i++){
	        mp[s[i]]++;
	    }
	    int count=0;
	    unordered_map<char,int>::iterator it;
	    for(it=mp.begin();it!=mp.end();it++){
	        int s=it->second;
	        if(s%2!=0){
	            count++;
	        }
	    }
	    if(count>1){
	        cout<<"No"<<endl;
	    }
	    else
	        cout<<"Yes"<<endl;
    }
	return 0;
}
