#include<bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    int mx = min(5, 100);
    cout << mx << "\n";
    reverse(v.begin(), v.end());

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    
}
int main(void)
{
    //solve();

    int a[] = {2, 53, 345, 3, 5,3,23};

    sort(a, a+7);

    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    
}
