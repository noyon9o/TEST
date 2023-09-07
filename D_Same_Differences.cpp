#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long x;
    map<long long, long long> mp;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        x -= i;
        mp[x]++;
    }
    long long ans = 0;
    for (auto it : mp)
    {
        long long a = it.second;
        ans += (a * (a - 1)) / 2;
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}