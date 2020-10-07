#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string s1,s2,s3;
	    for(int i=0;i<s.size();i++)
	    {
	        if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z'))
	        {
	            s1+=s[i];
	        }
	        else if(s[i]>='0' && s[i]<='9')
	        {
	            s2+=s[i];
	        }
	        else
	        {
	            s3+=s[i];
	        }
	    }
	    cout<<s1<<endl<<s2<<endl<<s3<<endl;
	}
	return 0;
}
