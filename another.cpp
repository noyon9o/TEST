#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int value;  

    for (int i = 0; i < 8; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    

    return false;
    
}