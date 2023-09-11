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



        cout << i <<":" <<mu[i] << " ";
    }
}

int main()
{

    sol();

  return false;
}