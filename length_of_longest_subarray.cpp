#include<bits/stdc++.h>
using namespace std;

int minSubsets(int arr[], int n)
{
    int res = 0,max=0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i]>0 && arr[i+1]>0)
        {
            res++;
        }
        if(max<res)
        {
            max = res;
        }
    }

    return max;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        cout << minSubsets(arr, N) << endl;
    }
	return 0;
}
