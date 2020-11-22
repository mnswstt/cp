#include <bits/stdc++.h>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        if ((m - n) > 0) {
            std::string piece = ((m - n) > 1)? " pieces" : " piece";
            std::cout << "Dr. Chaz will have " << m - n << piece << " of chicken left over!";
        } else {
            std::string piece = -1*(m - n) > 1? "pieces" : "piece";
            std::cout << "Dr. Chaz needs " << -1*(m - n) << " more " << piece << " of chicken!";
            // Dr. Chaz needs 9 more pieces of chicken!
        }
        std::cout << std::endl;
    }
    return 0;
}