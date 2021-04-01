vector<vector<int> > stockBuySell(vector<int> a, int n){
        
        vector<vector<int> > res;
        int l=0,r=0;
        bool check=false;
        for(int i=1;i<n;i++){
            if(a[i]>=a[i-1] && a[i]!=a[l]){
                r++;
                check=true;
            }
            else if(l==r) {
                r=i;
                l=i;
            }
            else {
                vector<int> temp;
                temp.push_back(l);
                temp.push_back(r);
                res.push_back(temp);
                
                l=i;
                r=i;
            }
        }
        if(!check) return res;
        else {
            vector<int> temp;
            temp.push_back(l);
            temp.push_back(r);
            res.push_back(temp);
        }
        return res;
    }
};