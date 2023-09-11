#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            a.push_back(val);
        }

        int cntodd = 0;
        for (auto e : a)
            cntodd += (e % 2);

        if (cntodd % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}