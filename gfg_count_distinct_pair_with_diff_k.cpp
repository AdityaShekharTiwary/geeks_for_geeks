#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[100];
        map<int,int>hash;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k,count=0;
        cin>>k;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])==k){
                    if(hash[arr[i]]!=arr[j]){
                        count++;
                    }
                    hash[arr[i]]=arr[j];
                }

            }
        }
        cout<<count<<endl;
    }
	return 0;
}
