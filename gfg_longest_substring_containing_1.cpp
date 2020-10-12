// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}
// } Driver Code Ends


int maxlength(string s)
{
    int count=0,max=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            count++;
        }
        else{
        if(max<=count){
        max=count;
        }
        count=0;
        }
         if(max<=count){
        max=count;
        }
    }
    return max;
}
