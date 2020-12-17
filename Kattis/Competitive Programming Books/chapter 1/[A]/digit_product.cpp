#include <bits/stdc++.h>

int iterate_mult(std::string num) {
    if (num.length() == 1) return num[0] - '0';

    std::string new_num;
    int sum = 1; 
    for (int i = 0; i < num.length(); i++) {
        if ((num[i] - '0') != 0) {
            sum *= (num[i] - '0');
        } else continue;
    }
    return iterate_mult(std::to_string(sum));
}

int main() {
    std::string input;
    while (std::cin >> input) {
        printf("%d\n", iterate_mult(input));
    }
    return 0;
}