// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	private:
	bool comp(string s, string ans){

	    if(s.length()!=ans.length()){
	        return s.length()>ans.length();
	    }

	    for(long long i= 0, j =0;i<s.length() && j<ans.length();i++, j++){
	        if((int)(s[i]-'0') > (int)(ans[j]-'0')){
	            return true;
	        }
	        else if((int)(s[i]-'0') != (int)(ans[j]-'0')){
	            return false;
	        }
	    }

	    return false;
	}

	public:
	string MaxZero(string a[],int n)
	{
	    string ans="";
	    int max=-1;
	    for(int i=0;i<n;i++)
	        {
	            long long curr=0;
	            string s=a[i];
	            int x=s.length();
	            while(x--)
	            {
	                if(s[x]=='0')
	                curr++;

	            }

	            if(curr>max&&curr!=0)
	            {
	                max=curr;
	                ans=s;
	            }
	            else
	            if(curr==max)
	            {
	                if(comp(s, ans))
	                    ans=s;
	            }


	        }
	        if(ans=="")
	        return "-1";
	        else
	        return ans;
	}


};


// { Driver Code Starts.

int main()
{

   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    string a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }




        Solution ob;
        cout << ob.MaxZero(a,n) ;


	    cout << "\n";

    }
    return 0;
}  // } Driver Code Ends
