#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int result(int arr[],int n)
{
  int count=0;
  for(int i=0;i<n;i++)
    {
        int j=i;
        unordered_set<int>s;
        while(j<n && s.find(arr[j])==s.end())
        {

            s.insert(arr[j]);
            count+=s.size();
            j++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<result(arr,n)<<"\n";
  }
	return 0;
}
