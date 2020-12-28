#include <bits/stdc++.h>

int main() {
    int tc{}; scanf("%d", &tc);
    int count{};
    while (tc--) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        printf("Case %d: %d\n", ++count, ((k+p)%n) == 0? n:(k+p)%n);
    }
}