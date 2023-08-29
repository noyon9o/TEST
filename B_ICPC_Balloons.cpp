#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, sum = 0;
        cin >> n;
        char s[n];

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        map<char, bool> m;
        for (int i = 0; i < n; i++)
        {
            if (m[s[i]])
                sum++;
            else
            {
                sum += 2;
                m[s[i]] = true;
            }
        }

        cout << sum << "\n";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << " ";
    // }
}

/*string s;
   map <int, char> mp;
   mp.insert({1, 'A'});
   mp.insert({2, 'B'});
   mp.insert({3, 'C'});
   mp.insert({4, 'D'});
   for (int i = 1; i < 5; i++)
   {
       cout << mp.at(i) << endl;
   }
   */