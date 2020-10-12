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
	        if(s[i]>='a' && s[i]<='c'){
	        cout<<2;

	        }
	        else if(s[i]>='d' && s[i]<='f'){
	        cout<<3;
	        }
	        else if(s[i]>='g' && s[i]<='i'){
	        cout<<4;
	        }
	        else if(s[i]>='j' && s[i]<='l'){
	        cout<<5;
	        }
	        else if(s[i]>='m' && s[i]<='o'){
	        cout<<6;

	        }
	        else if(s[i]>='p' && s[i]<='s'){
	        cout<<7;
	        }
	        else if(s[i]>='t' && s[i]<='v'){
	        cout<<8;

	        }
	        else if(s[i]>='w' && s[i]<='z'){
	        cout<<9;

	        }
	    }
	    cout<<endl;
	}


	return 0;
}
