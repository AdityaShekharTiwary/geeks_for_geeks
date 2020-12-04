// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}// } Driver Code Ends


// your task is to complete this function
int maxDistance(int arr[], int n)
{
     unordered_map<int, vector<int>> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]].push_back(i);
    }
    int res = 0;
    for(auto x: mp)
    {
        //int index = x.first;
        vector<int> arr(x.second);
        if(arr.size() >= 2)
        {
            int diff = arr[arr.size()-1] - arr[0];
            res = max(res, diff);
        }
    }
    return res;
}
