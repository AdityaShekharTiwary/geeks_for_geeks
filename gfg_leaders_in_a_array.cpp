vector<int> leaders(int a[], int n){
    vector<int> res;
    int m=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=m){
            m=a[i];
            res.push_back(a[i]);
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
