// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	public:
	int calculateMaxSumLength(int arr[], int n, int k)
	{
		// Your code goes here
		int sum=0,count=0,flag=0;
		for(int i=0;i<n;)
		{
		    flag=0;
		    count=0;
		    while(arr[i]<=k && i<n)
		    {
		        count++;
		        if(arr[i]==k)
    		    {
    		        flag=1;
    		    }
		        i++;
		    }
		    if(flag==1)
		    {
		        sum+=count;
		    }
		    while(arr[i]>k && i<n)
		    {
		        i++;
		    }
		}
		return sum;
	}


};

// { Driver Code Starts.


int main()
{


   	int t;
    cin >> t;
    while (t--)
    {
    	int n, tmp;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	   	}
	   	cin>>tmp;




        Solution ob;
		cout << ob.calculateMaxSumLength(arr, n, tmp);

	    cout << "\n";

    }
    return 0;
}  // } Driver Code Ends
