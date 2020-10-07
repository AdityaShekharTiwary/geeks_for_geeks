#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,count=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        a=(int)s[i];
	        if((a>=65) && (a<=90))
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;

	}
	return 0;
}
