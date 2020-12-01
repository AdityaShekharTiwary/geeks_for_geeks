#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[10000];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int hash[10000]={0};
	    int ans=-1,flag=0;
	    for(int i=0;i<n;i++){
	        hash[arr[i]]++;
	    }
	    for(int i=0;i<n;i++){
	         if(hash[arr[i]]==k){
	            ans=arr[i];
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<ans<<endl;
	    else if(flag==0)
	        cout<<-1<<endl;
	}
	return 0;
}
