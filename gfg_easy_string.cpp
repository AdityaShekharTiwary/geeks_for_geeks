#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=1;
	    stack<char>a;
	    transform(s.begin(),s.end(),s.begin(),::tolower);
	    int i=0;
	    a.push(s[i]);
	    for(i=1;i<s.size();i++)
	    {
	        if(a.top()==s[i])
	        {
	            a.push(s[i]);
	            count++;
	        }
	        else
	        {
	            cout<<count<<a.top();
	            a.push(s[i]);
	            count=1;
	        }
	    }
	    cout<<count<<a.top();
	    cout<<endl;
	}
	return 0;
}
