#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n , arr[1000];
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    cout << arr[0] << " " << arr[n-1] << endl;
	    
	}
	return 0;
}
