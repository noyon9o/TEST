#include<bits/stdc++.h>

using namespace std;

void solve()
{
    map<int, string> mp;

    mp.insert(pair<int, string>(1, "one"));

    mp.insert(pair<int, string>(2, "two"));

    cout << mp[1] << " " << mp[2] << endl;
}

void sol()
{
    int n;
    cin >> n;
    map<int, string> mu;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
    
            mu.insert(pair<int, string>(i, s));
    }

    for (int i = 1; i <= n; i++)
    {
        


        cout << i <<":" <<mu[i] << "\n";
    }
}

map<string, int> m;
string temp;
void test(void)
{
    cin >> temp;
    if (m[temp] == 0)
        cout << "OK" << endl;
    else
        cout << temp << m[temp] << endl;
    m[temp]++;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}