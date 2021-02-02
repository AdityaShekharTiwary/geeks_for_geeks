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


int sumOfDependencies(vector<int> adj[], int N)
{
    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += adj[i].size();
    }

    return sum;
}
int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N, E;
        cin >> N >> E;

        vector<int> adj[N];
        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
        }

        cout << sumOfDependencies(adj, N) << endl;
    }
    return 0;
}
