#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int mx=INT_MIN;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=mx)
	        {
	            mx=arr[i];
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
