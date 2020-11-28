#include<iostream>
using namespace std;

int sumOfF(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(abs(arr[j]-arr[i]) > 1)
            {
                sum += arr[j]-arr[i];
            }
            else if(abs(arr[j]-arr[i]) <= 1)
            {
                sum += 0;
            }
        }
    }

    return sum;
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

        cout << sumOfF(arr, n) << endl;
    }
    return 0;
}
