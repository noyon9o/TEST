#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define en endl

int main()
{
    string s ;

    cin >> s;
    ll sz = s.size();
    int A = 0, T = 0, C = 0, G = 0;
    for (int i = 0; i < sz; i++)
    {
        if(s[i] == 'A')
            A++;
        else if (s[i] == 'T')
            T++;
        else if (s[i] == 'G')
            G++;
        else
            C++;
    }
    if(A > T && A > C && A > G)
        cout << A <<en;
    else if (T > A && T > C && T > G)
        cout << T << en;
    else if (C > A && C > T && C > G)
        cout << C << en;
    else
        cout << G << en;
    // cout << sz << en;
    // cout << s[0]  << en;
    // cout << s[1]  << en;
    // cout << s[2]  << en;
    // cout << s[3]  << en;
    // cout << s[4]  << en;
    // cout << s[5]  << en;
    // cout << s[6]  << en;
    // cout << s[7]  << en;
    // cout << s[8]  << en;
    // cout << s[9]  << en;
    // cout << s[10]  << en;
    // cout << s[11]  << en;
    // cout << s[12]  << en;
}