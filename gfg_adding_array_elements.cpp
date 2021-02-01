// { Driver Code Starts


#include <bits/stdc++.h>

using namespace std;

int minOperations(int arr[], int n, int k);

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
        auto ans = minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends





int AddingArray(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> min_heap;

    for(int i=0;i<n;i++)
    min_heap.push(arr[i]);

    if(min_heap.top()>=k)
    return 0;

    int count=0;
    while(min_heap.size()>1)
    {
        count++;
        int first= min_heap.top();
        min_heap.pop();
        int sec= min_heap.top();
        min_heap.pop();
        min_heap.push(first+sec);

        if(min_heap.top()>=k)
        break;

    }
    if(min_heap.top()<k)
    return -1;

    return count;
}
