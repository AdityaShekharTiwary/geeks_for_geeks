
vector<int> duplicates(int arr[], int n) {
   vector<int> m(n),res;
   for(int i=0;i<n;i++) m[arr[i]]++;
   for(auto i=0;i<n;i++){
       if(m[i]>1) res.push_back(i);
   }
   if(res.size()==0){
       res.push_back(-1);
       return res;
   }
   return res;
}
