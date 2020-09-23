#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	int p,q,count=0;
	cin >> p>> q;
	if(p>=q)
	{
	    for(int i=1;i<=p;i++)
	    {
	        if(p%i == 0 && q%i == 0)
	        {
	            count++;
	        }
	    }
	}
	else if(p<q)
	{
	    for(int i=1;i<=q;i++)
	    {
	        if(p%i == 0 && q%i == 0)
	        {
	            count++;
	        }
	    }
	}
	cout << count << endl;
	}


	return 0;
}
