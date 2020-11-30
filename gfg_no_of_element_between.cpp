#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int l,r;
	    cin>>l>>r;
	    int left=0,right=0;

	    for(int i=0;i<n;i++){
	        if(arr[i]==l){
	            left=i;
	            break;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]==r){
	            right=i;
	        }
	    }
	    vector<int>hash;
	    for(int i=left+1;i<right;i++){
	        hash.push_back(arr[i]++);
	    }
	    cout<<hash.size()<<endl;
	}
	return 0;
}
