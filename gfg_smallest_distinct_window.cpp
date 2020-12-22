#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int MAX=256;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int pat[MAX]={0};
        int str[MAX]={0};
        unordered_set<char>ch;
        for(int i=0;i<s.size();i++)
            ch.insert(s[i]);
        int tsize=ch.size();
        int ssize=s.size();
        for(int i=0;i<ssize;i++)
        {
            pat[s[i]]=1;
        }
        int l=0,r=0,count=0,mn=INT_MAX;
        for(r=0;r<ssize;r++)
        {
            str[s[r]]++;
            if(pat[s[r]]!=0 and str[s[r]]<=pat[s[r]])
                count+=1;
            while(count==tsize)
            {
                mn=min(r-l+1,mn);
                str[s[l]]--;
                if(str[s[l]]<pat[s[l]])
                    count--;
                l++;
            }
        }
        cout<<mn<<endl;
    }
}
