#include <bits/stdc++.h>

int main() {
    int a, b, c = 0;
    while (scanf("%d %d", &a, &b) != EOF) {
        if (c > 0) printf("\n");
        printf("Case %d: %d\n", ++c, a+b);
        //printf("Case %d: %d\n\n", ++c, a+b);
    }
}