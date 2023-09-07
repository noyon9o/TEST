#include <iostream>
#include <cmath>

int main() {
    double doubleValue = 49.1;
    int intValue;

    if (doubleValue >= 0.1) {
        intValue = static_cast<int>(std::ceil(doubleValue));
    } else {
        intValue = static_cast<int>(doubleValue);
    }

    std::cout << "Converted Integer Value: " << intValue << std::endl;
    return 0;
}

// #include<bits/stdc++.h>

// using namespace std;

// #define ll long long

// int main()
// {
//     ll n;
//     cin >> n;
//     int ans = 0, mx = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mx = max(x, mx);
//         ans += mx - x;
//     }
//     cout << ans;
    
// }