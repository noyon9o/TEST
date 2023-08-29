#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    if (a + b + c == n)
        cout << 3 << "\n";
    else if (a + b == n)
        cout << 2 << "\n";
    else if (a + c == n)
        cout << 2 << "\n";
    else if (b + c == n)
        cout << 2 << "\n";
    
    
    return 0;
}