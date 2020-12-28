#include <bits/stdc++.h>

int main() {
    int X{}, N{}, rs{}; std::cin >> X >> N;
    while (N--) {
        int p; std::cin >> p;
        rs += (X-p);
    }
    std::cout << X+rs << '\n';

    return 0e0;
}