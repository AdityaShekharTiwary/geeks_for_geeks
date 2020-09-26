#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int calsum(int l,int r,vector<int> v)
{
    int sum=0;
    for(int i=l;i<=r;i++)
    {
      sum+=v[i];
    }
    return sum;
}
int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int sum;cin>>sum;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int temp;cin>>temp;
	        v.push_back(temp);
	    }
	    int l=0,r=0;
	    int min=1000;
	    while(l<=r && r<n)
	    {
	        int s=calsum(l,r,v);
	        if(s<=sum)
	        r++;
	        else
	        {
	            if(r-l+1<min)
	            min=r-l+1;
	            l++;
	        }
	    }
	    cout<<min<<endl;

	}
	return 0;
}
