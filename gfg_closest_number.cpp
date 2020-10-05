#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[100000];
	    //int *arr=new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int a=0;
	    int min=abs(k-arr[0]);
	    for(int i=0;i<n;i++)
	    {
	        if(abs(k-arr[i])<=min)
	        {
	            min=k-arr[i];
	            a=i;
	        }
	    }
	    cout<<arr[a]<<endl;
	}

	return 0;
}
