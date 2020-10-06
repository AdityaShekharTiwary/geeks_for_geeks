#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int temp,ai=0,bi=0;
	    int a[100000],b[100000];
	    for(int i=0;i<n;i++)
	    {
	       cin>>temp;
	       if(temp<0)
	       {
	           a[ai++]=temp;
	       }
	       else
	       {
	       b[bi++]=temp;
	       }
	       for(int i=0;i<n;i++)
	       {
	           cout<<b[i]<<" "<<a[i]<<" ";
	       }
	       cout<<endl;
	    }

	}
	return 0;
}
