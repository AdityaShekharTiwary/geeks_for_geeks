#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=1;
	    cin>>n;
	    int *arr=new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum*=arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
