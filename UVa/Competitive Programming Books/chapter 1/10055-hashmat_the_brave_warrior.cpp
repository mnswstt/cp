#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int rs = a - b;
        if (rs < 0) printf("%d", -1*rs);
        else printf("%d", rs);
        printf("\n");
    }

    return 0;
}