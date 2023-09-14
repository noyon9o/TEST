#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int d[n + 1];
    d[0] = 0;
    int x, y, z;
    for (int i = 1; i <= n; i++)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
            x = d[i - a];
        if (i >= b)
            y = d[i - b];
        if (i >= c)
            z = d[i - c];
        d[i] = 1 + max(z, max(x, y));
    }
    cout << d[n];
}

int main()
{
    solve();

    return 0;
}