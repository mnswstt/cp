#include <bits/stdc++.h>

int main() {
    __int64 a, b;
    while (std::cin >> a >> b) {
        if (a - b < 0) std::cout << -1*(a-b) << '\n';
        else  std::cout << a-b << '\n';
    }
}