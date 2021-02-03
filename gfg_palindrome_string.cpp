class Solution{
public:


	int isPlaindrome(string s)
	{
	    int n=s.size()-1;
	    for(int i=0;i<(n+1)/2;i++){
	        if(s[i]!=s[n-i]) return 0;
	    }
	    return 1;
	}

};
