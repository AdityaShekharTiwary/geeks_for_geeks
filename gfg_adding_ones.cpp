#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1]={0};
        ll k,j;
        cin>>k;
        while(k--)
        {
            cin>>j;
            a[j]+=1;
        }
        for(ll i=1;i<n+1;i++){
            a[i]=a[i-1]+a[i];
            cout<<a[i]<<" ";}
        cout<<endl;
    }
}
