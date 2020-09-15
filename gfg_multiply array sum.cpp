#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n ,arr[1000];
		long long int count1=0,count2=0;
		cin >> n;
		for(int i =0;i<n;i++)
		{
			cin >> arr[i];
		}
		for(int i=0;i<n/2;i++)
		{
			count1 += arr[i];
		}
		for(int i=n/2;i<n;i++)
		{
			count2 += arr[i];
		}
		cout << count1*count2 << endl;
	}
	return 0;
}
