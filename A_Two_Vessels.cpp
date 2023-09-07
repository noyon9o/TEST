// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int ans = 0;
//         ans = ((abs(a-b)+1)/2+c-1)/c;
//         cout << ans << endl;
//     }
    
// }
#include<bits/stdc++.h>

using namespace std;

#define en endl

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        double re = (a + b) / 2.0;
        if(a == b)
            cout << 0 << en;
        else if (a > b)
        {
            double fin = re - b;
            double ans = fin / c;
            int answer;
            if(ans >= 0.1)
                answer = static_cast<int>(ceil(ans));

             cout << answer << en;
        }
        else if (a < b)
        {
            double in = re - a;
            double an = in / c;
            int nn;
            if(an >= 0.1)
                nn = static_cast<int>(ceil(an));
            cout << nn << en;
        }

    }
    return 0;
}