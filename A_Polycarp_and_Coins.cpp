#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        
        cin >> n;
        int c1, c2;
        c1 = n;
        c2 = c1;
        if(n % 3 == 1)
            c1 += 1;
        else if (n % 3 == 2)
            c2 += 1;
        cout <<c1 << " " << c2<< "\n";
    }
    return 0;
}