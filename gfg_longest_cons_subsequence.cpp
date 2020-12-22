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
  sort(arr,arr+N);
  int current_streak=1;
  int max_streak=1;
  for(int i=1;i<N;i++){
      if(arr[i]!=arr[i-1]){
          if(arr[i]==arr[i-1]+1){
              current_streak++;
          }
          else {
              max_streak=max(max_streak,current_streak);
              current_streak=1;
          }

      }
  }
  max_streak=max(max_streak,current_streak);
  return max_streak;

}
