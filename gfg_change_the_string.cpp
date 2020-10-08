#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        int c=s[0];
	        int d=s[i];
	        if(isupper(c))
	        {
	            s[i]=toupper(s[i]);
	        }
	        else
	        {
	            s[i]=tolower(s[i]);
	        }
	    }
	    cout<<s<<endl;


	}
	return 0;
}

