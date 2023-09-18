#include <bits/stdc++.h>

using namespace std;

#define umap unordered_map
#define uset unordered_set
#define pb push_back

void test_case()
{
    string keys, words;
    cin >> keys >> words;
    umap<char, int> keys_mp;
    for (int i = 0; i < 26; i++)
    {
        keys_mp[keys[i]] = i + 1;
    }
    int len = words.length(), ans = 0;
    for (int i = 1; i < len; i++)
    {
        ans += abs(keys_mp[words[i]] - keys_mp[words[i - 1]]);
    }
    cout << ans << "\n";
}

int main(void)
{

    int t;
    cin >> t;
    while (t--)
        test_case();

    return 0;
}

/*
        The Team Scientific Decathlon Olympias requires teams of three students.
        The school teachers decided that the teams will be composed of three children that are good at different subjects.
        That is, each team must have one mathematician, one programmer and one sportsman.
        Of course, each child can be a member of no more than one team.

        the team scientific decathalon olympias required teams of three students.
        the school teachers decided that the teams will be composed of three children that are good at differebt subject.
        that is each team must have one mathmatician one programmmer and one sportsman.
        of course each children can be member of no more one team.

        the team scientific decathalon olympias required teams of three students.
        the school teachers decided that the teams will be composed of three children that are good at different subject.
        of course each children can be member of no more one team.
*/