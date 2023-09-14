#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    if(n <= 2)
        return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) 
            return false;
    }
    return true;
}
void solve()
{
    long long int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            cnt++;
        else 
            continue;
    }
    if(cnt == 3)
        cout << "YES\n";
    else
        cout << "NO\n";

}

int main(void)
{
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        
    // if(!(isprime(4)))
    //     cout << "IT is";
    // else
    //     cout << "its not";
}