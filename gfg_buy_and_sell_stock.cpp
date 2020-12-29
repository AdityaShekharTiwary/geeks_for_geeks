// { Driver Code Starts


// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int a[], int n) {
    int b,k=0;
    for(int i=0;i<n;i++)
    {
        while(a[i]>=a[i+1]&&i<n)
        i++;
        b=i;
        while(a[i]<=a[i+1]&&i<n)
        i++;
        if(i==n)i--;
        if(b<i)
        {
            k=1;
        cout<<'('<<b<<" "<<i<<')'<<" ";

        }
    }
    if(k==0)
    cout<<"No Profit";
    cout<<endl;
}
