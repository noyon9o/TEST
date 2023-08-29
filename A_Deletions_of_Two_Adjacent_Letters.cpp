#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s, t;
        cin >> s >> t;
        bool yes = false;
        forn(i, s.length())
            if (s[i] == t[0] && i % 2 == 0)
                yes = true;
        cout << (yes ? "YES" : "NO") << endl;
    }
}