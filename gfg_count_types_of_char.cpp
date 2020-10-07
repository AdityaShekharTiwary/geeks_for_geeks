#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count1=0,count2=0,count3=0,count4=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if((s[i]>='a') && (s[i]<='z'))
	        {
	            count1++;
	        }
	        else if((s[i]>='A') && (s[i]<='Z'))
	        {
	            count2++;
	        }
	        else if((s[i]>='0') && (s[i]<='9'))
	        {
	            count3++;
	        }
	       else
	        {
	            count4++;
	        }
	    }
	    cout<<count2<<endl<<count1<<endl<<count3<<endl<<count4<<endl;
	}
	return 0;
}
