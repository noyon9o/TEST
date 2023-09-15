#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string k, s;
    getline(cin, k);
    getline(cin, s);
    int res = 0;

    for (int i = 1; i < s.length(); i++)
    {
        int index1 = k.find(s[i]);
        int index2 = k.find(s[i - 1]);
        res += abs(index1 - index2);
    }

    cout << res << endl;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}