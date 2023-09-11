#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;

            if (in == 0)
                continue;
            string s;
            cin >> s;
            for (int j = 0; j < in; j++)
            {
                if (s[j] == 'U')
                {
                    ar[i]--;
                }
                else if (s[j] == 'D')
                {
                    ar[i]++;
                }
                if (ar[i] < 0)
                {
                    ar[i] += 10;
                }
                if (ar[i] > 9)
                {
                    ar[i] -= 10;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}