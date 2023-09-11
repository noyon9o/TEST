#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

       
        if (min(a, b) * 2 >= c) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}
