#include<bits/stdc++.h>

using namespace std;

// void solve()
// {
//     int n = 0;
//     string s;
//     cin >> s;
//     if(s[1] == '+')
//         n++;
//     if(s[1] == '-')
//         n--;

//     cout << n;
// }

int main()
{
    int n, x = 0;
    cin  >> n;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if(s[1] == '+')
            x++;
        if(s[1] == '-')
            x--;
    }
    cout << x;
    
    return 0;
}