#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1, c2;
        c1 = n / 3;
        c2 = n % 3;
        int ans1 = c1;
        int ans2 = c1;

        if(c2 == 1)
            ans1++;
        else if (c2 == 2)
            ans2++;
        cout <<ans1 << " " << ans2<< "\n";
    }
    return 0;
}