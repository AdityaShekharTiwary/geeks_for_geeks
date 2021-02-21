class Solution{   
public:
    long long findSmallest(long long arr[], int n) {
    long long int res=1;
    for(int i=0;i<n && arr[i]<=res;i++) res+=arr[i];
    return res;
    }
};