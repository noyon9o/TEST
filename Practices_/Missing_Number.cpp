#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    // cout << "Hello world.";
    ll n;
    cin >> n;
    ll a, sum = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> a;
        sum += a;   
    }
    cout << n*(n+1)/2-sum;
    return 0;
}