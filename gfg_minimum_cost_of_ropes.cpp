// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minCost(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


long long minCost(long long arr[], long long n) {
    long long count=0;
    priority_queue<long long ,vector<long long>,greater<long long>>pq(arr,arr+n);
    while(pq.size()!=1){
        long long a=pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        count+=a+b;
        pq.push(a+b);
    }
    return count;
}
