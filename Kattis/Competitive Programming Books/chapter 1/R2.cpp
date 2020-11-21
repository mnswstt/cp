#include <stdio.h>

int main() {
    int r1, s;
    while (scanf("%d %d", &r1, &s) != EOF) {
        printf("%d\n", 2*s-r1);
    }
    return 0;
}