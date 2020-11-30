#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int ans=-1;
	    int arr[100000];
	    int hash[100000]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        hash[arr[i]]++;
	        }
	    for(int i=0;i<n;i++){
	        if(hash[arr[i]]==k){
	            ans=arr[i];
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
