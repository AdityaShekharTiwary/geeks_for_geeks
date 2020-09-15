// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    int totalCount(int arr[], int n, int k) {
        // code here
        int res=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%k == 0)
            {
                count = arr[i]/k;
                res += count;
            }
            else if(arr[i] % k != 0)
            {
               count = (arr[i]/k)+1;
               res += count;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
