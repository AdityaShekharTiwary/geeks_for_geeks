class Solution
{
    public:
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int> hash;
            vector<int> res;
            hash[A[0]]++;
            for(int i=1;i<n1;i++) {
                if(A[i-1]!=A[i]) hash[A[i]]++;
            }

            hash[B[0]]++;
            for(int i=1;i<n2;i++) {
                if(B[i-1]!=B[i]) hash[B[i]]++;
            }

            hash[C[0]]++;
            if(hash[C[0]]==3) res.push_back(C[0]);
            for(int i=1;i<n3;i++) {
                if(C[i-1]!=C[i]){
                     hash[C[i]]++;
                     if(hash[C[i]]==3) res.push_back(C[i]);
                }
            }
            return res;
        }

};
