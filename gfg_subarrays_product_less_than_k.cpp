int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
    long long int mul=1;
    set<long long int > st;
    map<long long int,int> m1;
    int ans=0,m=0;
    for(int i=0;i<a.size();i++) {mul=mul*a[i]; if(mul>=k)
    {
    int f=mul/k;
    if(mul%k!=0)
    {
    f++;
    }
    auto it=st.lower_bound(f);
    int p1=*it;
    mul=mul/(p1);
    m=m1[p1];

    }

    ans+=(i+1-m);

    st.insert(mul);
    m1[mul]=i+1;
    }
    return ans;
}
