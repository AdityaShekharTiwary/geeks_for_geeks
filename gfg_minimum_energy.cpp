#include<iostream>
using namespace std;

int minenergy(int a[],int N)
{
    int sum=0,minimum=0;
    for(int i=0;i<N;i++)
        {
            if(a[i]<0)
            {
                sum+=a[i];
                if(sum<=0 && abs(sum)>minimum)
                minimum=abs(sum)+1;
                return minimum;
            }
            else if(a[i]>0)
            return 1;
        }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,arr[100];
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        cout << minenergy(arr,n) << endl;
    }
    return 0;
}
