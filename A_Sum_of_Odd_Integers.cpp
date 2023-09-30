#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if(k*k <= n && n%2 == k % 2)
        cout << "YES\n";
    else
        cout << "NO\n";
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

