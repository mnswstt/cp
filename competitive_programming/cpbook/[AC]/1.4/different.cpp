#include <bits/stdc++.h>

long long int abs(long long int a) {
    if (a < 0) return (-1)*(a);
    return a;
}

int main() {
    long long int a{}, b{};
    while (std::cin >> a >> b) {
        // printf("%I64d\n", abs(a, b));
        std::cout << abs(a-b) << std::endl;
    }
    return 0;
}