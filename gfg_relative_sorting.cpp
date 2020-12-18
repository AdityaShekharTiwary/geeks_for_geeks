#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int> a(n),b(m);
	    for(int i=0;i<n;i++)
	         cin>>a[i];
	    for(int i=0;i<m;i++)
	         cin>>b[i];
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[a[i]]++;
	    }
	    for(int i=0;i<m;i++)
	    {
	        if(mp[b[i]]!=0)
	        {
	            for(int j=0;j<mp[b[i]];j++)
	                cout<<b[i]<<" ";
	            mp[b[i]]=-1;
	        }
	    }
	    for(auto i=mp.begin();i!=mp.end();i++)
	    {
	        if(i->second>0)
	        {
	            for(int j=0;j<i->second;j++)
	            cout<<i->first<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
