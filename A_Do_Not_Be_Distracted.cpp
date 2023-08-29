#include<bits/stdc++.h>

using namespace std;
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long a[26] = {0}, j = 0;
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
        if(a[s[i] - 'A'] > 1 && s[i-1] != s[i])
        {
            j = 1;
            break;
        }
    }
    if(j == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
        
//         int an = 0;
//         map<char, int>mp;
//         for (int i = 0; i < s.size(); i++)
//         {
//             mp[s[i]]++;
//             char z = s[i];
//             while (s[i] == z)
//             {
//                 i++;
//             }
//             i--;
//             if (mp[z] > 1)
//                 an = 1;
//         }
//         if(an == 1) cout << "NO" << endl;
//         else cout << "YES" << endl;
//     }