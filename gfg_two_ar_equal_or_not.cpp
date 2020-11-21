// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];

	    for(int i = 0;i<n;i++)
	       cin >> a[i];

	    for(int i = 0;i<m;i++)
	       cin >> b[i];

	    cout << doUnion(a, n, b, m) << endl;

	}

	return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m)  {
    unordered_set<int> hs;
    for(int i=0;i<n;i++)
    {
        hs.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        hs.insert(b[i]);
    }
    return hs.size();
    //code here
}
