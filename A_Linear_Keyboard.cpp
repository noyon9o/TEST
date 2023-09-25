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