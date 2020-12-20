#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    set<int,greater<int>> s;
	    int arr2[100000];
	    for(int i{0};i<n;++i)
	    arr2[i]=-1;


	    for(int i{0};i<n;++i){
	    cin>>arr[i];
	    s.insert(arr[i]);


	       auto it=s.find(arr[i]);
	       it++;
	       if(it==s.end())
	       arr2[i]=-1;
	       else
	       arr2[i]=*it;



	    }
	    for(int i{0};i<n;++i)
	    cout<<arr2[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
