#include <iostream>
using namespace std;

void findLeftMax(int arr[], int n, int leftMax[])
{
   leftMax[0]=arr[0];
   for(int i=1;i<n;i++)
   {
       leftMax[i]= max(leftMax[i-1],arr[i]);
   }
}

void findRightMax(int arr[], int n, int rightMax[])
{
   rightMax[n-1]=arr[n-1];
   for(int i=n-2;i>=0;i--)
   {
       rightMax[i]= max(rightMax[i+1],arr[i]);
   }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];

	    int leftMax[n];
	    int rightMax[n];

	    findLeftMax(arr,n,leftMax);
	    findRightMax(arr,n,rightMax);

	    int water[n];

	    for(int i=0;i<n;i++)
	    {
	        water[i]=(min(leftMax[i],rightMax[i]))-arr[i];
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=water[i];

	    cout<<sum<<endl;

	}
	return 0;
}
