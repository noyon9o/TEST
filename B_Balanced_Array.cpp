#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, sum1 = 0, sum2 = 0;
        cin >> a;
        vector<int> bala;
        if (a % 2 == 0)
        {
            if (a % 4 == 0)
            {
                cout << "YES\n";
                bala.push_back(2);
                for (int i = 1; i <= a; i++)
                {
                    if (i % 2 == 0)
                        bala.push_back(i);
                }
                for (int i = 1; i <= a; i++)
                {
                    if (i % 2 != 0)
                    {
                        bala.push_back(i);
                        sum1 += i;
                    }
                }
                for (int i = 1; i <= bala.size()/2; i++)
                {
                    sum2 += bala[i];
                }
                int c = sum2 - sum1;
                int f = bala.back();
                bala.back() = f + c;

                for (int i = 1; i <= a; i++)
                {
                    cout << bala[i] << " ";
                }
                cout << "\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}