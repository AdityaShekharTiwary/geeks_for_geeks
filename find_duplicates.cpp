#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int arr[10],count =0,i;
		for(int i=0;i<10;i++)
		{
			cin >> arr[i];
		}
		if(arr[3] == arr[4])
		cout << arr[3]<< endl;
		else 
		cout << arr[5]<< endl;
		
	}
	return 0;
}
