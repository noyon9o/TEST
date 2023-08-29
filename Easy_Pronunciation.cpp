#include <iostream>
#include <string>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isEasyToPronounce(const std::string &s) {
    int consecutiveConsonants = 0;

    for (char c : s) {
        if (!isVowel(c)) {
            consecutiveConsonants++;
            if (consecutiveConsonants >= 4) {
                return false; 
            }
        } else {
            consecutiveConsonants = 0;
        }
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::string s;

        std::cin >> n >> s;

        if (isEasyToPronounce(s)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
