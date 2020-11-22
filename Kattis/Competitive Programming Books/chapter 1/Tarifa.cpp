#include <stdio.h>

int main() {
    int n, x, p;
    scanf("%d%d", &n, &x);
    int acc = n;
    while (x--) {
        scanf("%d", &p);
        acc += n - p;
    } printf("%d\n", acc);
    return 0;
}