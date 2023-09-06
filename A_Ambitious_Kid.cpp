#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   

    int n;
    cin >> n;
    int ar[n];
    ll m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (abs(ar[i]) < m)
            m = abs(ar[i]);
    }

    cout << m;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ar[i] == 0)
    //     {
    //         cout << 0;
    //         break;
    //     }
    //     else if (ar[i] < 0 && abs(ar[i]) < m)
    //     {
    //         cout << abs(ar[i]);
    //         break;
    //     }
    //     // else if (ar[i])
    //     // {
    //     //     /* code */
    //     // }
        
    //     else
    //     {
    //         cout << m;
    //         break;
    //     }
    // }
}