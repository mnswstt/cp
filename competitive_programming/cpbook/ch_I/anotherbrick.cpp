#include <bits/stdc++.h>

int main() {
    int h, w, n; scanf("%d %d %d", &h, &w, &n);
    int pile = h*w;
    while (n--) {
        int k; scanf("%d", &k);
        if (pile == 0) {
            printf("YES");
            break;
        } else if (pile < 0) {
            printf("NO");
            break;
        } else {
            pile -= k;
        }
    }
    if (pile > 0) printf("NO");
    printf("\n");
}