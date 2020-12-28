#include <bits/stdc++.h>

int main() {
    int tc; scanf("%d", &tc);
    while (tc--) {
        int n; scanf("%d", &n);
        int rs = ((((((n*567)/9)+7492)*235)/47)-498)/10%10;
        printf("%d\n", rs > 0? rs:rs*(-1));
    }
    return 0;
}