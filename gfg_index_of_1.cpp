#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
    long int n, arr[100000];
	int t,i;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        int temp = -1;
	        if(arr[i] == 1)
	        {
	             temp = i;
    	        cout << temp << endl;
    	        break;
	        }
	    }
	}
	return 0;
}
