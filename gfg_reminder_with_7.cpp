// { Driver Code Starts
#include <iostream>
using namespace std;
int remainderWith7(string );

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;

cout<<remainderWith7(n)<<endl;

}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int remainderWith7(string n)
{
    int rem = 0;
    for(int i = 0; i < n.length(); i++)
    {
        rem = rem*10 + (n[i] - '0');
        rem = rem%7;
    }
    return rem;
}
