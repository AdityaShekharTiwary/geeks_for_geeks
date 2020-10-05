// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	string equilibrium(int *arr, int n) {
	    if(n==0){
          return "NO";
        }
        int s=0;
        for(int i=0;i<n;i++){
          s+=arr[i];
        }
        int left_s=0;
        for(int i=0;i<n;i++){
          s=s-arr[i];
          if(left_s==s && i+1<n){
              return "YES";
          }
          left_s+=arr[i];
        }
        return "NO";

	}
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
