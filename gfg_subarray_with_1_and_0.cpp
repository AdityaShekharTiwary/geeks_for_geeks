// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int countSubarrWithEqualZeroAndOne(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
// } Driver Code Ends



// arr[] : the input array
// N : size of the input array

// return the number of subarrays with equal 0s and 1s
long long int countSubarrWithEqualZeroAndOne(int arr[], int N)
{
    unordered_map<int,long> m;
    int pre_sum=0;
    long long int count=0;

    for(int i=0;i<N;i++){
        arr[i]=(arr[i]==0) ? -1 : 1;
        pre_sum+=arr[i];
        if(pre_sum==0){
            count++;
        }
        if(m.find(pre_sum)!=m.end()){
            count+=m.find(pre_sum)->second;
        }
        m[pre_sum]++;
    }
    return count;
}
