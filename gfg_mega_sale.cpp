#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO	
	cout.tie(NULL);
}

void solve()
{
	int n,m; cin>>n>>m;
	vll arr(n);
	input_arr
	sort(arr.begin(),arr.end());
	ll profit=0;
	f(i,0,min(n,m)){
		if(arr[i]>=0) break;
		else profit+=arr[i];
	}
	cout<<abs(profit)<<"\n";

}

int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
