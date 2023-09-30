#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    while (true)
    {
        
    }
    
}

int main(void)
{
    solve();
}


/*
    b = 3    lim -- 5
    1 sec -- 3 + 1 + 1 = 5 - 1 = 4
    2 sec -- 4 - 1 =             3
    3 sec -- 3 - 1 =             2
    4 sec -- 2 -1  =             1
    5 sec -- 1 + 7 = 5 (for bug) 4
    6 sec -- 4 - 1 =             3
    7 sec -- 3 - 1 =             2
    8 sec -- 2 - 1 =             1
    9 sec -- 1 - 1 =             0

*/

/*
    b = 1  lim -- 7
    1 sec -- 1 + 1 + 2 -- 4 - 1  =     3
    2 sec -- 3 - 1                     2
    3 sec -- 2 + 5 -- 7 - 1      =     6
    4 sec -- 6 - 1               =     5
    5 sec -- 5 -1                =     4
    6 sec -- 4 - 1               =     3
    7 sec -- 3 - 1               =     2
    8 sec -- 2 -1                =     1
    9 sec -- 1 + 6 -- 7 - 1      =     6
    10 sec -- 6 - 1              =     5
    11 sec -- 5 -1               =     4
    12 sec -- 4 - 1              =     3
    13 sec -- 3 - 1              =     2
    14 sec -- 2 -1               =     1
    15 sec -- 1 + 8 -- 7 - 1     =     6
    16 sec -- 6 - 1              =     5
    17 sec -- 5 -1               =     4
    18 sec -- 4 - 1              =     3
    19 sec -- 3 - 1              =     2
    20 sec -- 2 -1               =     1
    21 sec -- 1-1                =     0
*/