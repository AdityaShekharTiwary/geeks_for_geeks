#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[1000];
	    int count=0;
	    int hash[1001]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        hash[arr[i]]++;
	    }
	    for(int i=0;i<1001;i++){
	        if(hash[i]>0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
