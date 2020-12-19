// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);

// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }

    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
  int m=*max_element(arr,arr+N);
  int hash[m+1]={0};
  for(int i=0;i<N;i++){
      hash[arr[i]]=1;
  }
  int current_streak=0,max_streak=0;
  for(int i=0;i<m+1;i++){
      if(hash[i]==1)
        current_streak++;
      else
        current_streak=0;

      max_streak=max(max_streak,current_streak);
  }
  return max_streak;
}
