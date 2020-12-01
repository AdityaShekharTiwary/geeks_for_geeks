// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        string res;
        int hash[27]={0};
        int flag=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            if(hash[s[i]]-'a'>1){
                res= s[i];
                flag=1;
                break;
            }
        }
        if(flag==1)
        return res;
        else
        return #;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends
