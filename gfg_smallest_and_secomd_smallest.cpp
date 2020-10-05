#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n,min1=0,min2=0,res=-1;
	    cin>>n;
	    int *arr=new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(n==0 || n==1)
	    {
	       cout<<-1<<endl;
	    }
	   else
	    {
	       sort(arr,arr+n);
	       for(int i=0;i<n;i++)
           {
               min1=arr[0];
               if(arr[0]<arr[i+1])
               {
                   min2=arr[i+1];
               }
               else if(arr[0]==arr[i+1])
               res=-1;
           }
           cout<<min1 <<" " << min2 << res<<endl;

	    }

	}
	return 0;
}
