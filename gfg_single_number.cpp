// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends




//User function template for C++
class Solution{
public:
	int getSingle(int arr[], int n) {
	    int num=arr[0]^arr[1];
	    for(int i=2;i<n;i++)
	    {
	        num=num^arr[i];
	    }
	    return num;
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
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
