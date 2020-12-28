#include <bits/stdc++.h>

int main() {
    int l{}, r{}; scanf("%d %d", &l, &r);
    if (l == r && l > 0) {
        printf("Even %d\n", r*2);
    } else if (l==0&&r==0) {
        printf("Not a moose\n");
    } else {
        printf("Odd %d\n", (l > r)?l*2:r*2);
    }

    return 0;
}