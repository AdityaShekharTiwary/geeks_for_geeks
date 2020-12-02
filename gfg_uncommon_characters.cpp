// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
             string str;
            set<char> s;
            unordered_map<char,int> mp1;

            for(int i=0;i<A.length();i++)
                mp1[A[i]]++;

            for(int i=0;i<B.length();i++)
            {
                if(mp1[B[i]]==0)
                    s.insert(B[i]);
            }

            mp1.clear();

            for(int i=0;i<B.length();i++)
                 mp1[B[i]]++;

            for(int i=0;i<A.length();i++)
            {
                if(mp1[A[i]]==0)
                    s.insert(A[i]);
            }

           for(auto x: s)
           str.push_back(x);

          if(!str.empty())
          return str;
          else
          return "-1";

        }

};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
