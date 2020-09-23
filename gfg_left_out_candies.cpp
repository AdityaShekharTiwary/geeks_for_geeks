#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int i = 0;
        while (m >= ((i % n) + 1))
            {
                m -= ((i % n) + 1);
                i++;
            }
            cout << m << endl;
    }
return 0;
}
