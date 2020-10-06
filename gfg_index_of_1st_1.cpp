#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,res=-1;
	    cin>>n;
	    int *arr=new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==1)
            {
               res=i;
	           break;
            }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
