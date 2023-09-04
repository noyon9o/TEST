#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] >= 0 && ar[i] < m)
            m = ar[i];
    }

    // cout << min;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == m)
        {
            cout << m;
            break;
        }
        else if (ar[i] < 0 && abs(ar[i]) < m)
        {
            cout << abs(ar[i]);
            break;
        }

        else
        {
            cout << 0;
            break;
        }
    }
}