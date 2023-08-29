#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
        else
            continue;
    }
    if(count == 2)
        return true;
    else
        return false;
    
}
int main()
{
    int n, amount(0);
    cin >> n;
    bool b[3001] = {false};
    int pfactirs[3001] = {0};
    for (int i = 2; i <= n; i++)
    {
        if(!b[i])
        {
            for (int j = i+i; j <= n; j+= i)
            {
                b[j] = true;
                pfactirs[j] += 1;
            }
        }
        if(pfactirs[i] == 2)
        {
            amount += 1;
        }
    }
    cout << amount;

    return 0;
}