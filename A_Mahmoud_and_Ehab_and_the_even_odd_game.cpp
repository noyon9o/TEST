#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    if(n <= 2)
        return false;
    for (int i = 2; i <= n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

void solve()
{
    

}

int main(void)
{
    solve();


    
}