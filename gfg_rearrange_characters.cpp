#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
	fast
	test
	{
        string s; cin>>s;
        int n=s.size();
        vi arr(26,0);
        f(i,0,s.size()) arr[s[i]-'a']++;

        priority_queue<pair<int,char>>pq;
        f(i,0,26) {
            if(arr[i]) pq.push({arr[i],i+'a'});
        }

        pair<int,char> pre={0,0};
        s.clear();
        while(pq.size()){
            pair<int,char> curr=pq.top();
            pq.pop();
            s+=curr.second;
            curr.first--;
            if(pre.first) pq.push(pre);
            pre=curr;
        }
        cout<<(s.size()==n)<<endl;
	}

	return 0;
}
