// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {

	int T;
	cin >> T;

	while(T--)
	{

	    string S;
	    cin >> S;

        char ans = nonrepeatingCharacter(S);

        if(ans != '$')
	    cout << ans;
        else cout << "-1";

        cout << endl;

	}

	return 0;
}
// } Driver Code Ends


// Complete this function
char nonrepeatingCharacter(string S)
{
   int hash[1000]={0};
   for(int i=0;i<S.size();i++){
       hash[S[i]]++;
   }
   char ans='$';
   for(int i=0;i<S.size();i++){
       if(hash[S[i]]==1){
           ans=S[i];
           break;
       }
   }
   return ans;

}
