#include <bits/stdc++.h>

int main() {
    std::string month;
    int day;
    while (std::cin >> month >> day) {
        if ((month[0] == 'O' && day == 31) || (month[0] == 'D' && day == 25)) {
            std::cout << "yep" << '\n';
        } else {
            std::cout << "nope" << '\n';
        }
    }
    return 0;
}