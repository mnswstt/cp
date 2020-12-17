#include <stdio.h>

int main() {
    int a, b, c, n;
    while (scanf("%d %d %d %d", &a, &b, &c, &n) != EOF) {
        if (!(a && b && c)) {
            printf("NO\n");
        } else if (n < 3) {
            printf("NO\n");
        } else if ((a+b+c) >= n) {
            printf("YES\n");
        }
    }
    return 0;
}