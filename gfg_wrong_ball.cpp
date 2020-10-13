#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n,count=0;
	    for(int i=0;i<s.size();i++)
	    {
	        int n=(i)%2;
	        if(s[i]=='R' && n!=0)
	        {
	            count++;
	        }
	        if(s[i]=='B' && n==0)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;

	}
	return 0;
}
