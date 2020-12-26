#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long int height[n];
        for(long long int i=0;i<n;i++){
            cin>>height[i];
        }
        if(n==0) cout<< 0<<endl;
        int l[n];
        int r[n];
        int ml,mr;
        ml=l[0]=height[0];
        mr=r[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            if(height[i]>l[i-1]){

                l[i]=height[i];
            }
            else {
                l[i]=l[i-1];
            }
        }

        for(int i=n-2;i>=0;i--){
            if(height[i]>r[i+1]){

                r[i]=height[i];
            }
            else {
                r[i]=r[i+1];
            }
        }

        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(l[i],r[i])-height[i];
        }
        cout<< sum <<endl;
    }


	return 0;
}
