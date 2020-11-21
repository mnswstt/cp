#include <bits/stdc++.h>

int main() {
    int t, c = 1; scanf("%d", &t);
    while (t--) {
        int N, K, P; scanf("%d %d %d", &N, &K, &P);
        int result = K + P,
            divider = result / N;
        printf("Case %d: %d", c++, (result-(divider*N))? result-(divider*N):N);
        if (t > 0) printf("\n");
    }

    return 0;
}