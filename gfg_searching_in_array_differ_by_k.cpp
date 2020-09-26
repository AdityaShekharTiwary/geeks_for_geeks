#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[50];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int x;
	    cin>>x;
	    int index=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	        {
	        index=i;
	        break;
	        }
	    }
	    cout<<index<<endl;
	}

	return 0;
}
