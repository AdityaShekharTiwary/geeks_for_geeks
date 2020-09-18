#include<bits/stdc++.h>
using namespace std;

int minSubsets(int arr[], int n)
{
    sort(arr, arr+n);

    int res = 0;

    for(int i = 0; i < n; i++)
    {
        while(arr[i] + 1 == arr[i+1])
        {
            i++;
        }

        res++;
    }

    return res;
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
