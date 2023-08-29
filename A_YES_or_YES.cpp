#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
            cout << "YES\n";
        else
            cout << "NO\n";
       
    }
    return 0;
}




        // if(s[0] == 'Y' || s[0] == 'y')
        //     // cout << "NO" << "\n";
        //     continue;
        // else if (s[1] == 'E' || s[1] == 'e')
        //     // cout << "NO" << "\n";
        //     continue;
        // else if (s[2] == 'S' || s[2] == 's')
        // {
        //     // cout << "NO\n";
        //     continue;
        // }
        // else
        //     cout << "NO\n";
        // cout << "YES\n";