#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
 {
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

     int t;
     cin>>t;
     while(t--)
     {
         int n ;
         cin>>n;
         ll arr[n];
         ll maxm=0;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             maxm=max(arr[i],maxm);
         }
         sort(arr,arr+n);
         int m;
         cin>>m;
         ll minm=maxm+1;
         for(int i=0;i<=n-m;i++)
         {
             int temp=i+m-1;
             minm=min((arr[temp]-arr[i]),minm);
             //cout<<minm<<" ";
         }
         cout<<minm<<endl;
     }
	//code
	return 0;
}
