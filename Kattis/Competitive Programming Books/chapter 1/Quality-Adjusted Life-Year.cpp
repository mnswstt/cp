#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    float accu = 0;
    while (n--) {
        float q, y;
        scanf("%f %f", &q, &y);
        accu += q*y;
    }
    printf("%.3f\n", accu);

    return 0;
}