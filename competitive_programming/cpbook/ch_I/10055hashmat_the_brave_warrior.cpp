#include <bits/stdc++.h>

int main() {
    int i{}; scanf("%d",&i);
    while (i--) {
        int n{}; scanf("%d", &n);
        if (n > 2) {
            printf("%f\n",sqrt(n));
        } else if (n == 0) {
            printf("0\n");
        } else printf("1\n");
    }

    return 0;
}