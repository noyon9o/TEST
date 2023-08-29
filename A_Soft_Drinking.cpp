#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin >> n >>k >>l >> c >> d >>p >> nl >> np;
    int total_dri = k*l;
    total_dri = total_dri/nl;
    int total_slice = c*d;
    int total_slat = p/np;

    int ans = min(min(total_dri, total_slice), total_slat)/n;
    cout << ans << "\n";

    return 0;
}