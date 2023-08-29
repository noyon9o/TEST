#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int s[m];

    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }

    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    
    

    
    
    


    return 0;
}

/* 6 2 3    n = length
            m = blocked position  length
            k = maximum cost of lamps

    1 3 ----  s ==  all blocked position

 1 2 3  kk ==  maximum cost of lamps.
 */
