#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int side = min(max(a * 2, b), max(a, b * 2));

    cout << side*side << "\n";
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}