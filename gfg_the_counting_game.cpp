#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]>='A' && s[i]<='Z')
	        {
	            count++;
	        }
	    }
	    cout<<count+1<<endl;
	}
	return 0;
}
