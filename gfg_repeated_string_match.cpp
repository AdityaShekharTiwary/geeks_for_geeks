class Solution{

    public:
    int repeatedStringMatch(string A, string B)
    {
       int res=1;
       int count=B.size()/A.size()+2;
       string str=A;
       for(int i=0;i<=count;i++){
           if(str.find(B)!=string::npos) return res;
           else str+=A;
           res+=1;
       }
       return -1;
    }

};
