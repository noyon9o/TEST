#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

#define pi pair<int, int>

void sol()
{
    int n, x;
    cin >> n;
    vector<pi> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(mp(x, i));
    }
    sort(v.begin(), v.end());
    for (int i = 0, j = n; i < n; i++, j--)
    {
        v[i].first = j;
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[v[i].second] = v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}