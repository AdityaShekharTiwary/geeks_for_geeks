#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int flag=0;
	    unordered_map<char,int> hash;
	    string ans;
	    for(int i=0;i<s.size();i++){
	        hash[s[i]-'a']++;
	        if(hash[s[i]-'a']>1){
	            ans=s[i];
	            flag=1;
	            break;

	        }
	    }
	    if(flag==1)
	        cout<<ans<<endl;
	   else
	        cout<<-1<<endl;
	}
	return 0;
}
