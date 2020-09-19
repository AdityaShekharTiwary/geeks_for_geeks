// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int sum=0,max=0;
	    if(n==1)
	    return arr[0];
	    if(n==2)
	    {
	        if(arr[0]>arr[1])
	        return arr[0];
	        else
	        return arr[1];
	    }
	    else
	    {
	        for(int i=3;i<n;i++)
	        {
	            for(int j=i+2;j<n;j++)
	            {
	                sum+=arr[i];
	                if(max<arr[i])
	                max=sum;
	                return max;
	            }
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
