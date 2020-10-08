#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string s;
	while(t--)
	{
	    int n,len=0,max=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	    }
	    for(int i=0;i<n;i++)
	    {
	        len=s.size();
	        if(max<len)
	        {
	            len=max;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
