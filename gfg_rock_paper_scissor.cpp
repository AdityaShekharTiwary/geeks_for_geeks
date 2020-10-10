#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    if(s[0]==s[1])
	    cout<<"DRAW"<<endl;
	    else if(s[0]=='R' && s[1]=='S')
	    cout<<'A'<<endl;
	    else if(s[0]=='S' && s[1]=='R')
	    cout<<'B'<<endl;
	    else if(s[0]=='P' && s[1]=='S')
	    cout<<'B'<<endl;
	    else if(s[0]=='S' && s[1]=='P')
	    cout<<'A'<<endl;
	    else if(s[0]=='R' && s[1]=='P')
	    cout<<'B'<<endl;
	    else if(s[0]=='P' && s[1]=='R')
	    cout<<'A'<<endl;
	}
	return 0;
}
