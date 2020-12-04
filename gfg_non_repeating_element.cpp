#include <bits/stdc++.h>
typedef long long ll;
typedef long double lld;
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    map<ll,ll>mp;
	    vector<ll>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        mp[v[i]]++;
	    }
	    for(auto it:v){
	        auto itr=mp.find(it);
	        if(itr->second==1){
	            cout<<itr->first<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
