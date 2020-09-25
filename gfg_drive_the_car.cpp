#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n,k;
	    cin >> n >> k;
	    int *arr=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    long long int max=-1;
	    for(int i=0;i<n;i++)
	    {
	        int x=abs(arr[i]-k);
	        if(x>max)
	        {
	            max=x;
	            cout << max << endl;

	        }

	    }

	}
	return 0;
}
