// { Driver Code Starts
#include<bits/stdc++.h>


#define N 105
using namespace std;

int *mergeKArrays(int arr[][N],int k);

void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int arr[N][N];
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	int *output = mergeKArrays(arr, k);
	printArray(output, k*k);
	cout<<endl;
}
	return 0;
}// } Driver Code Ends


// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
typedef pair<int,pair<int,int>>pq;
int *mergeKArrays(int arr[][N], int k)
{
     int *res=new int[k*k];
     priority_queue<pq,vector<pq>,greater<pq>>q;
      for(int i=0;i<k;i++)
      {
          q.push(make_pair(arr[i][0],make_pair(i,0)));
      }
      int j=0;
     while(!q.empty())
     {

        pq curr=q.top();
         q.pop();
         res[j++]=curr.first;
         int iarr=curr.second.first;
         int iele=curr.second.second;
         if(iele<k-1)
         {
             q.push(make_pair(arr[iarr][iele+1], make_pair(iarr,iele+1) ));

         }


     }
     return res;
}
