#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define nline "\n"
#define all(x) (x).begin(), (x).end()


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define rep(i,s,e) for(int i=s;i<e;i++)
#define repp(i,s,e) for(int i=s;i<=e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll mod = 1e9 + 7;

void fast()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif

    fast_IO
    cout.tie(NULL);
}

void shortestPath(vector<pair<int, int >> adj[], vector<int> &dis, int src) {
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>>> pq;
    dis[src] = 0;
    pq.push(mp(0, src));
    while (!pq.empty()) {
        int node = pq.top().ss;
        int dis = pq.top().ff;
        pq.pop();
        for (auto it : adj[node]) {
            int child = it.ss;
            int next_dis = it.ff;
            dis[child] = min(dis[child], (dis + next_dis));
            pq.push(mp(dis[child], child));
        }
    }
}


void solve()
{
    int n, m; cin >> n >> m;
    vector<pair<int, int>> adj[n];
    rep(i, 0, n) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    int src; cin >> src;
    vector<int> dis(n, INT_MAX);
    shortestPath(adj, dis, src);
    for (auto it : dis) cout << it << " ";

}



int main()
{
    fast();

    // test

    {
        solve();
    }



    return 0;
}
