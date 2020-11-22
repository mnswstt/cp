#include <iostream>
#include <algorithm>

int main() {
    int l, r;
    while (std::cin >> l >> r) {
        if (l != r) {
            int max = std::max(l, r);
            std::cout << "Odd " << (2*max) << '\n';
        } else if (l == 0 && r == 0) {
            std::cout << "Not a moose" << '\n';
        } else {
            std::cout << "Even " << (l+r) << '\n';
        }
    }
    return 0;
}