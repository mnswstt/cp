#include <stdio.h>
#include <math.h>

int main() {
    int tc; scanf("%d", &tc);
    while (tc--) {
        int n; scanf("%d", &n);
        int rs = (((n * 567) / 9 + 7492) * 235 / 47) - 498;
        rs = abs(rs);
        printf("%d", rs/10);
        if (tc > 0) printf("\n");
    }
    return 0E0;
}