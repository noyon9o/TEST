#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int x = a * b * c * d;
    x = x % 100;

    if (x < 10)
        cout << "0" << x;
    else
        cout << x;
}

int main(void)
{
    solve();

    return false;
}