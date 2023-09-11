#include <bits/stdc++.h>
using namespace  std;
int main() {
    vector<int>s;
    s.push_back(1); // s[0] = 1
    s.push_back(2); // s[1] = 2
    s.push_back(3); // s[2] = 3
    s.push_back(4); // s[3] = 4
    
    // for(int i = 0; i < 5; i++)
    //     cin >> s.push_back(i);


    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    
    cout << endl;

    //s.clear();

    if(s.empty()) cout << "empty";
    else cout << "Not empty";


    
    

    return 0;
}