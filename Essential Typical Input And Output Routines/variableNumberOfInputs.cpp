#include <bits/stdc++.h>

int main() {
    int k;
    while (scanf("%d", &k) != EOF) {
        int ans = 0, v;
        while (k--) { scanf("%d", &v); ans += v; }
    }
    
    while (1) {
        int ans = 0, v;
        char dummy;
        while (scanf("%d%c", &v, &dummy) != EOF) {
            ans += v;
            if (dummy == '\n') break;
        }
        if (feof(stdin)) break;
        printf("%d\n", ans);
    }

    return 0;
}