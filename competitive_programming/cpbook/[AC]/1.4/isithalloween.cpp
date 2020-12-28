#include <bits/stdc++.h>

int main() {
    char month[3 + 1];
    int day;
    scanf("%s %d", month, &day);
    if ((month[0] == 'O' && day == 31) || (month[0] == 'D' && day == 25)) {
        printf("yup\n");
    } else {
        printf("nope\n");
    }

    return 0;
}