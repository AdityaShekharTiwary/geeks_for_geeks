#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,j,sum=0;
	    cin>>n;
	    int arr[100];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++);
	        {
	            sum=(arr[i]+arr[j]);
	            if(sum%4==0)
	                count+=1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
