// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
	public:
		int KthDistinct(vector<int>nums,int k){
		    unordered_map<int,int>hash;
		    for(int i=0;i<nums.size();i++){
		        hash[nums[i]]++;
		    }
		    if(hash.size()<k)
		        return -1;
		    int count=0;
		    for(int i=0;i<nums.size();i++){
		        if(hash[nums[i]]==1)
		            count++;
		        if(count==k){
		            return nums[i];
		        }
		    }

		    return -1;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans  = ob.KthDistinct(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
