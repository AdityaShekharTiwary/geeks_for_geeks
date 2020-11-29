#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,flag=0;
	    cin>>n>>k;
	    int arr[1000];
	    int hash[1000]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        hash[arr[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(hash[i]==k){
	            cout<<arr[i]<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
