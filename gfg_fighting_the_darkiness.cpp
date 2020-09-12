// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	

	public:
	int  maxDays(int a[],int n)
	{
	    // Your code goes here
	    int max = 0;
	    for(int i=0;i<n;i++)
		/*	if(max < a[i])
	    	max = a[i];
		}
		return max;
		*/
		sort(a,a+n);
        return a[n-1];
		
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
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       

        Solution ob;
        cout <<  ob.maxDays(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
