#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int cnt=0;
	    int arr[26];
	    for(int i=0;i<26;i++)
	        arr[i]=0;
	    for(int i=0;i<s.length();i++)
	        ++arr[s[i]-'a'];
	    for(int i=0;i<26;i++){
	        if(arr[i]>0)
	            ++cnt;
	    }
	    int present[26];
	    for(int i=0;i<26;i++)
	        present[i]=0;
	    int l=0;
	    int k=0;
	    int mn=s.length();
	    for(int i=0;i<s.length();i++){
	        if(present[s[i]-'a']==0)
	            ++k;
	        ++present[s[i]-'a'];
	        if(k==cnt){
	            while(l<=i && present[s[l]-'a']>1){
	                --present[s[l]-'a'];
	                ++l;
	            }
	            mn=min(mn,i-l+1);
	        }
	    }
	    cout << mn << endl;
	}
	return 0;
}
