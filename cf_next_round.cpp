#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>n>>k;
    int arr[1000];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
            count++;
    }
    
    
    cout<<count<<endl;

}
