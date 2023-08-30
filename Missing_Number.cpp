#include<bits/stdc++.h>

using namespace std;

int main()
{
    // cout << "Hello world.";
    int n;
    cin >> n;
    int a, sum = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        sum += a;   
    }
    cout << sum-n;
    return 0;
}