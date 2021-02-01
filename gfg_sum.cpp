// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2);

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];

        long long k1, k2;
        cin >> k1 >> k2;

        cout << sumBetweenTwoKth(a, n, k1, k2) << endl;

    }
	return 0;
}
// } Driver Code Ends




long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
{
    sort(a,a+n);
    long long sum=0;
    if(k1>n) return 0;
    if(k2>n){
        for(int i=k1;i<n;i++) sum+=a[i];
        return sum;
    }
    else return accumulate(a + k1, a + k2 - 1, 0);
}
