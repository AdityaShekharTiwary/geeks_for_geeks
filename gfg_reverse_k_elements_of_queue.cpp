// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    queue<ll>nq;
    stack<ll> st;
    for(int i=0;i<k;i++)
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(!st.empty())
    {
        int x=st.top();
        nq.push(x);
        st.pop();
    }
    while(!q.empty())
    {
        int x=q.front();
        nq.push(x);
        q.pop();
    }
    return nq;
}
