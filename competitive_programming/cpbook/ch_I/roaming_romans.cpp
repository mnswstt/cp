#include <stdio.h>
#include <math.h>

int main() {
    float x;
    while (scanf("%f", &x) != EOF) { printf("%d\n", (int)ceil((1000*(5280*x)/4854))); }
}