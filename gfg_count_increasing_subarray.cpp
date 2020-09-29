// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

//User function template for C++
class Solution{
public:

	int countIncreasing(int arr[], int n) {
	    // code here
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        //for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]<arr[i+1])
	            {
	                count++;
	            }
	        }
	    }
	    return count;
	}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countIncreasing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
