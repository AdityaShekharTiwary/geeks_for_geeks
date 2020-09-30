#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,res=INT_MIN;
	    cin>>n;
	    int *arr = new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        count++;
	        else
	        count=0;
	    }
	    cout<<max(res,count)<<endl;
	}
	return 0;
}a
