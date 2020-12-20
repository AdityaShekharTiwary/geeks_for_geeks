// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> sortByFreq(int arr[],int n);

int main() {


	int t;
	cin >> t;


	while(t--){


	    int n;
	    cin >> n;

	    int a[n+1];

	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    vector<int> v;
	    v = sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}

	return 0;
}

// } Driver Code Ends


//Complete this function
//Return the sorted array

bool comp(const pair<int,int>& a,const pair<int,int>& b){
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second;
}

vector<int> sortByFreq(int arr[],int n)
{
    //Your code here
     unordered_map<int,int> m;
    for(int i = 0 ; i < n ; i++)
    m[arr[i]]+=1;
    vector<int> res;
    vector<pair<int,int>> v;
    copy(m.begin(),m.end(),back_inserter(v));
    sort(v.begin(),v.end(),comp);
    for(int i = 0 ; i < v.size() ; ++i)
    for(int j = 0 ; j < v[i].second ; ++j)
    res.push_back(v[i].first);
    return res;
}
