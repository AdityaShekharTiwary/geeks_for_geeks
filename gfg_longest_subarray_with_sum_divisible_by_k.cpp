// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends





//User function template for C++
class Solution{
public:
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int> m;
	    int hash[n];
	    int sum=0,ans=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        hash[i]=((sum%k)+k)%k;
	    }
	    for(int i=0;i<n;i++){
	    if(hash[i]==0)
	        ans=i+1;
	    else if(m.find(hash[i])==m.end())
	    {
	        m[hash[i]]=i;
	    }
	    else
	        ans=max(ans,i-m[hash[i]]);
	    }
	    return ans;

	}
};


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
