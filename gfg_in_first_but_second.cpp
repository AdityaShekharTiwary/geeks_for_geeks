#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll a[100000],b[100000];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=0;i<m;i++){
	        cin>>b[i];
	    }
	    unordered_set<ll> s;
	    for(ll i=0;i<m;i++){
	        s.insert(b[i]);
	    }
	    for(ll i=0;i<n;i++){
	        if(s.find(a[i])==s.end()){
	            cout<<a[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
