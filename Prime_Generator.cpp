#include<bits/stdc++.h>

using namespace std;
bool is_prime(long long n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
        return false;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            if(is_prime(i))
                cout << i << "\n";
        }
        cout << "\n";
    }
    return 0;
    
}