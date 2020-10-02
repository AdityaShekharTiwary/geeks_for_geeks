// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) {

    // Your code here
    int temp=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp+1){
         temp++;
        }
    }
    return temp+1;

}

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() {

    //taking testcases
    int t;
    cin>>t;
    while(t--){

        //input number n
        int n;
        cin>>n;
        int arr[n];

        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];

        //calling missingNumber()
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0;
}   // } Driver Code Ends
