#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        m = min(m, abs(c));
    }
    cout << m;

    // int n;
    // cin >> n;
    // int ar[n];
    // int m = INT16_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    //     if (ar[i] >= 0 && ar[i] < m)
    //         m = ar[i];
    // }

    // // cout << min;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ar[i] == 0)
    //     {
    //         cout << 0;
    //         break;
    //     }
    //     else if (ar[i] < 0 && abs(ar[i]) < m)
    //     {
    //         cout << abs(ar[i]);
    //         break;
    //     }

    //     else
    //     {
    //         cout << m;
    //         break;
    //     }
    // }
}