// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//User function Template for C++
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        for(int i=L;i<=R;i++){
         int num=i;
         bool checked[10]={false};

         while(num){
             if(checked[num%10])
             break;
             checked[num%10]=true;
             num=num/10;
         }
         if(num==0)
             cout<<i<<" ";
        }

    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);

		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;

    }
    return 0;
}  // } Driver Code Ends
