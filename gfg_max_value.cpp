#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            a[i] = a[i] - i;
        int sum = *max_element(a, a + n) - *min_element(a, a + n);
        cout << sum << endl;
    }
    return 0;
}
