#include <iostream>
#include <vector>

using namespace std;

vector<int> findArray(int P) {
    vector<int> array;
    for (int i = 2; i <= P; ++i) {
        while (P % i == 0) {
            array.push_back(i);
            P /= i;
        }
    }
    if (P > 1) {
        array.push_back(P);
    }
    return array;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int P;
        cin >> P;
        vector<int> array = findArray(P);
        if (array.size() > 100 || (array.size() == 1 && array[0] != 41)) {
            cout << "Case #" << t << ": -1\n";
        } else {
            cout << "Case #" << t << ": " << array.size();
            for (int i = 0; i < array.size(); ++i) {
                cout << " " << array[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
