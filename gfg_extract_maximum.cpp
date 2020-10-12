// C++ program to extract the maximum value
#include<bits/stdc++.h>
using namespace std;

// Function to extract the maximum value
int extractMaximum(string str)
{
	int num = 0, res = 0;

	// Start traversing the given string
	for (int i = 0; i<str.length(); i++)
	{
		// If a numeric value comes, start converting
		// it into an integer till there are consecutive
		// numeric digits
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (str[i]-'0');

		// Update maximum value
		else
		{
			res = max(res, num);

			// Reset the number
			num = 0;
		}
	}

	// Return maximum value
	return max(res, num);
}

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string str;
    	cin>>str;
    	cout << extractMaximum(str);
    	cout<<endl;
    }
	return 0;
}
