// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0 ; i < n ; ++ i )
            cin >> arr[i] ;

        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


int firstRepeated(int arr[], int n) {
    int ans=-1;
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=n-1;i>=0;i--){
        if(hash[arr[i]]>1){
            ans=i+1;
        }
    }
    return ans;
}
