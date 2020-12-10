#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    map<string,int> hash;
	    for(int i=0;i<n;i++){
	        if(hash.find(s[i])==hash.end() && s[i]!="END"){
	            hash[s[i]]++;
	        }
	        else if(s[i]!="END" && hash.find(s[i])!=hash.end()){
	            hash[s[i]]--;
	        }
	        else if(s[i]=="END")
	        hash.clear();
	    }
	    int count=0;
	    map<string,int>:: iterator it;
	    for(it=hash.begin();it!=hash.end();it++){
	        if(it->second==1){
	            count+=it->second;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
