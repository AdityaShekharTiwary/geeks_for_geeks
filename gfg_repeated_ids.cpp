#include<bits/stdc++.h>
using namespace std;

void repeatedIDs(int arr[], int n)
{
    int hashArr[1001] = {0};

    for(int i = 0; i < n; i++)
    {
        hashArr[arr[i]] = 1;
    }

    for(int i = 0; i < n; i++)
    {
        if(hashArr[arr[i]] == 1)
        {
            cout << arr[i] << " ";
            hashArr[arr[i]] = 0;
        }
    }
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        repeatedIDs(arr, n);
        cout << endl;
    }
    return 0;
}
