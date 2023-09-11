#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define n endl

bool is_prime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            return false;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if(n%2 == 0)
    {
        cout << n/2 << "\n";
        for (int i = 0; i < n/2; i++)
        {
            cout << 2 << " ";
        }
    } 
    else{
        int R = n -3;
        cout << R/2+1<<"\n";
        for (int i = 0; i < R/2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
}
// int h;
    // //cin >> h;
    // vector<int> v;
    // for (int i = 1; i <= 5; i++)
    // {
         
    //     v.push_back(i);
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v.at(i);
    //     cout << n;
    // }
    // for (int i = 1; i <= 1000; i++)
    // {
    //     if(!is_prime(i))
    //         cout << i << " ";
    //     else
    //         continue;
    // }