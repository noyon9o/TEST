#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, g = 0;
    cin >> a >> b;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + a);
    for (int i = 0; i < a - 1; i++)
    {
        if (ar[i + 1] - ar[i] > g)
            g = ar[i + 1] - ar[i];
    }
    double x = ar[0];
    double y = (double)g / 2;
    double anwser = max(x, y);
    double z = b - ar[a - 1];
    anwser = max(z, anwser);

    cout << fixed << setprecision(10) << anwser;
}

int main(void)
{
    solve();
}