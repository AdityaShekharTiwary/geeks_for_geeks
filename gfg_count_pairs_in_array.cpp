#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    int arr[n],count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            if( i*arr[i] > j*arr[j])
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
