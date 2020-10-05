#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    string v="";
	    int a,n;cin>>a>>n;
	    for(int i=1;i<=n;i++)
	    {
	        long long int s=pow(a,i);
	        v=v+to_string(s);
	    }
	    sort(v.begin(),v.end());int c=0;
	    for(int i=0;i<v.size();i++)
	    {
	        if(v[i]!='0')
	        {
	            c=i;break;
	        }
	    }
	    cout<<v.substr(c)<<endl;
	}
	return 0;
}
