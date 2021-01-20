#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    set<int> v;

	    for(int i=0;i<n;i++)
	     {
	         int temp;
	         cin>>temp;
	         v.insert(temp);
	     }
	     int k,sum=0;
	     cin>>k;
	     set<int>::iterator it=v.begin();
	     for(auto i=0;i<k;i++)
	       {
	            sum+=(*it);
	            it++;
	       }
	   cout<<sum<<endl;
	}
	return 0;
}
