#include<bits/stdc++.h>

using namespace std;


void ex()
{
    int ar[4][2] = {3, 4, 3, 3, 3, 4, 3, 3};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ar[i][j] << " ";
        }
        
    }
    
}


void solve()
{
    int x = 1;
    for (int i = 1; i <=4 ; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << x << "  ";
            x++;
        }
        cout << "\n";
    }
    
}

int main(void)
{
    // solve();

    ex();


    return false;
}