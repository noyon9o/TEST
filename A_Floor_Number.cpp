#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n  >> m;
        if(n <= 2)
            cout << 1 << "\n";
        else
            cout << (n-3) / m +2 << "\n";
         
    }
    
}
