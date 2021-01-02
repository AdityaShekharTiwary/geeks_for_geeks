#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
        int cnt=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                cnt++;
            }
        }
        if(cnt>-1){
            for(int i=0;i<n;i++)
            {
                if(a[i]==x)
                {
                    cout<<i<<" ";
                    break;
                }
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==x)
                {
                    cout<<i;
                    break;
                }
            }
        }
        else cout<<-1;
        cout<<endl;
	}
	return 0;
}
