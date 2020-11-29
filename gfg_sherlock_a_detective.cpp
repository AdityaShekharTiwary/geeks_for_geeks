#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    set<int> s;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s.insert(arr[i]);
	    }
	    for(int i=0;i<=n;i++){
	        if(s.find(i)==s.end()){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
