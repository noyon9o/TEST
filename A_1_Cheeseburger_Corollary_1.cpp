#include<bits/stdc++.h>

using namespace std;
#define en "\n"

void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int s, d, k;

        cin >> s >> d >> k;
        int bun, chees;
        bun = s*2 + d*2;
        chees = s + d*2;

        if(chees >= k && bun > k)
            cout << "Case #" << i << ": " << "YES" << en;
        else
            cout << "Case #" << i << ": " << "NO" << en;  
    }


}

int main(void)
{
    solve();


    return false;
}