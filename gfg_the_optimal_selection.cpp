#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[1000];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        int k=arr[i]*i;
	        sum +=k;
	    }
	    cout << sum << endl;
	}

	return 0;
}
