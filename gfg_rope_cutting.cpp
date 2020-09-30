#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int i,j;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    i=0;
	    int x=n , count=0;;
	    while(i<n){
	        if(arr[i+1]==arr[i] && i+1<n){
	            i++;
	        }
	        else if(arr[i+1]>arr[i] && i+1<n){
	            cout<<(n-i-1)<<" ";
	            i++;
	        }
	        if(i==n-1){
	            break;
	        }
	    }
	    cout<<"\n";

	}
	return 0;
}
