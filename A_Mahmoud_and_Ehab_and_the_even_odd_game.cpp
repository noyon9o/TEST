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

/*
    Problem solving skills are applicable to many daily musings. For instance, you might ponder over shared birthdays,
    bird houses, mapmaking, or ordering an exact number of chicken nuggets.
    Naturally, another great question to ponder is:
    how many deckers of a cheeseburger you could build if you spent your entire salary on fast food!
*/