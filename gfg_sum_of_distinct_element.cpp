// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	    // Your code goes here
	    int count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=arr[i+1])
	        count+=arr[i];
	    }
	    return count;
	} 
		 

};

// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        cout << ob.sumOfDistinct(a,n);
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
