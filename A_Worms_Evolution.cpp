#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<int, pair<int, int>> sumToIndices;
    vector<int> lengths(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> lengths[i];
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                sumToIndices[lengths[i] + lengths[j]] = make_pair(i, j);
            }
        }
    }
    
    for (int k = 0; k < n; ++k) {
        if (sumToIndices.find(lengths[k]) != sumToIndices.end()) {
            cout << k + 1 << " " << sumToIndices[lengths[k]].first + 1 << " " << sumToIndices[lengths[k]].second + 1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    
    return 0;
}
