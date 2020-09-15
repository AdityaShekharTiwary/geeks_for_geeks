// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int count1=0,count2=0;
       for(int i=0;i<n/2;i++)
		{
			count1 += a[i];
		}
		for(int i=n/2;i<n;i++)
		{
			count2 += a[i];
		}
		return abs(count1-count2);
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
