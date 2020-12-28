#include <bits/stdc++.h>

int main() {
    float  acc = 0;
    int N{}; scanf("%d", &N);
    while (N--) {
        float q, y;
        scanf("%f %f", &q, &y);
        acc += (q*y);
    }
    printf("%.3f\n", acc);



    return 0;
}