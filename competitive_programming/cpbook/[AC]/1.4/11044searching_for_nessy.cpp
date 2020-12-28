#include <bits/stdc++.h>

int main() {
    int tc; scanf("%d", &tc);
    while (tc--) {
        int r{}, c{}; scanf("%d %d", &r, &c);
        r -= r % 3;
        c -= c % 3;
        printf("%d\n", r/3 * c/3);
        // printf("%d\n",(r - ((r % 3))/3)*((c - (c % 3))/3));
    }

    return 0;
}