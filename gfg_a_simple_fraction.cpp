#include <bits/stdc++.h>
#include <algorithm>
#define MOD 1000000007
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define endll "\n";
using namespace std;
typedef pair<int,int> pp;
void cinn(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int d;cin>>d;
        cout<<n/d;
        int ans=n%d;
        if(ans!=0){
            cout<<".";
            string s="";
            unordered_map<int,int> mp;
            while(ans!=0&&mp.find(ans)==mp.end()){
                mp[ans]=s.length();
                ans=10*ans;
                s=s+to_string(ans/d);
                ans=ans%d;
            }
            if(ans==0){
                cout<<s;
            }
            else{
                cout<<s.substr(0,mp[ans])<<"("<<s.substr(mp[ans])<<")";
            }
        }
        cout<<endll;

    }
    return 0;
}

/*

*/
