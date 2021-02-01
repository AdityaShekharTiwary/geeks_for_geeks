// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int arr[100]={0};
        for(int i=0;i<s.size();i++) arr[s[i]-'a']+=1;
        priority_queue<int>pq;
        for(int i=0;i<100;i++) pq.push(arr[i]);
        while(k--){
            int temp=pq.top();
            pq.pop();
            temp-=1;
            pq.push(temp);
        }
        int sum=0;
        while(!pq.empty()){
            int temp=pq.top();
            sum+=temp*temp;
            pq.pop();
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;

        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
