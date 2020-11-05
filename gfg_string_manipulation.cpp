#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string x;
	    stack<string>s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        if(!s.empty() && x==s.top())
	        {
	            s.pop();
	        }
	        else
	        {
	            s.push(x);
	        }
	    }
	    cout<<s.size()<<endl;


	}
	return 0;
}
