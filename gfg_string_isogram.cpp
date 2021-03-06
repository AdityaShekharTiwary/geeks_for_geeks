class Solution{
  public:
    //Complete this function
    bool isIsogram(string s)
    {
        set<char>k;
        for(int i=0;i<s.size();i++) k.insert(s[i]);
        if(s.size()==k.size()) return true;
        else return false;
    }
};
