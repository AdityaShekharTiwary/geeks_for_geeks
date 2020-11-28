#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
int main()
{
    int t,n,k,i=0;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        int hash[MAX]={0};
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            hash[arr[i]]++;
        }
        for(i=0;i<MAX;i++)
        {
            if((hash[i] != k) && (hash[i] > 0))
            {
              cout<<i<<endl;
              break;
            }
           // cout<<hash[i]<<" ";
        }
    }
    return 0;
}
