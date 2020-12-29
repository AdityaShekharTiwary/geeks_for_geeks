#include <iostream>
using namespace std;

int main() {

	int t; cin>>t;
	while(t-->0){
    	int n; cin>>n;
    	int a[n]={0};

    	int x;
    	for(int i=0;i<n;i++){
        	cin>>x;
        	if(x>0 && x<=n)
        	    a[x-1]=-1;
    	}

        int i;
    	for(i=0;i<=n;i++){
        	if(a[i]==0){
        	    cout<<i+1<<endl;
        	    break;
        	}
    	}
    	i==n?cout<<i+1<<endl:cout<<"";
    }
	return 0;
}
