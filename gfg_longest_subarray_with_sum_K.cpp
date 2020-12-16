#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[100000];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int res = 0;
    map<int, int> mp;
    int pre_sum = 0;

    for(int i = 0; i < n; i++)
    {
        pre_sum += arr[i];

        if(pre_sum == k)
        {
            res = i + 1;
        }

        if(mp.find(pre_sum - k) != mp.end())
        {
            res = max(res, i - mp[pre_sum - k]);
        }

        if(mp.find(pre_sum) == mp.end())
        {
            mp.insert({pre_sum, i});
        }
    }
    cout<<res<<endl;
	}
	return 0;
}
