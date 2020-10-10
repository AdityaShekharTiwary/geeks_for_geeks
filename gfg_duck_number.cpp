#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s,res;
	    cin>>s;
        int i = 0, n = s.length();
        while (i < n && s[i] == '0')
        i++;
        while (i < n)
        {
            if (s[i] == '0')
                res="YES";
            i++;
        }
         res="NO";
	    cout<<res<<endl;

	}
	return 0;
}
