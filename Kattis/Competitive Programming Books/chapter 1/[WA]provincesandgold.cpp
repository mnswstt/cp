#include <bits/stdc++.h>

int main() {
    int g, s, c;
    while (scanf("%d %d %d", &g, &s, &c) != EOF) {
        int buyingpower = (g*3) + (s*2) + (c*1);
        if (buyingpower > 1) {
            if (buyingpower >= 8) {
                printf("Province or Gold");
            } else if (buyingpower >= 5) {
                printf("Duchy or ");
                if (buyingpower > 5) printf("Gold");
            } else if (buyingpower >= 2) {
                printf("Estate or ");
                if (buyingpower > 2) printf("Silver");
                else printf("Copper");
            }
        } else {
            printf("Copper");
        }
        printf("\n");
    }
    return 0;
}