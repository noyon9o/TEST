#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int cnt = 0;
        string s = "vika";
        for (int i = 0; i < m; i++)
        {
            char c = s[cnt];
            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == c)
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 4)
                break;
        }
        if (cnt == 4)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        cout << "NO"
             << "\n";
    }
}