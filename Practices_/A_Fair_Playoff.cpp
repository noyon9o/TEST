#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> s(4);
        for (int i = 0; i < 4; i++)
            cin >> s[i];

        int min_s01 = s[0], max_s01 = s[1];
        if (s[0] > s[1])
        {
            min_s01 = s[1];
            max_s01 = s[0];
        }

        int min_s23 = s[2], max_s23 = s[3];
        if (s[2] > s[3])
        {
            min_s23 = s[3];
            max_s23 = s[2];
        }

        if (min_s01 > max_s23 || max_s01 < min_s23)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
