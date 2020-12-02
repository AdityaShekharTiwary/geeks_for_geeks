// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
	}
    return 0;
}// } Driver Code Ends


/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n)
{
    sort(arr,arr+n);
    int sum=0,j=i+1,k=n-1;
    for(int i=0;i<n-2;i++){
        while(j<k){
            sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                return 1;
                else if(sum<0)
                    j++;
                else
                    k--;
            }
        }
    }
    return 0;
}
