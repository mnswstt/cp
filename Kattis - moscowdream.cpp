#include <bits/stdc++.h>

int main() {
    // 0<=a,b,c<=10, 1<=n<=20
    // 'YES': a>=1, b>=1, c>=1 && a+b+c >= n 
    // otherwise 'NO'
    int a, b, c, n; scanf("%d %d %d %d", &a, &b, &c, &n);
    printf((a >= 1 && b >= 1 && c >= 1) && (a+b+c >= n) && (n >= 3)? "YES":"NO");

    return 0;
}