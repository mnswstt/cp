#include <bits/stdc++.h>

int main() {
    int init, st, nd, rd;
    while (std::cin >> init >> st >> nd >> rd) {
        if (st || nd || rd) break;
        int dgr = 0;
        // step 1. turn the dial clockwise 2 full turns.
        // step 2. stop at the first number of the combination.
        // step 3. turn the dial counter-clockwise 1st full turn.
        // step 4. continue turning counter-clockwise until the 2nd number is reached.
        // step 5. turn the dial clockwise again until the 3rd number is reached.
        // step 6. done.
        // example => 0 30 0 30;
        dgr += 360*3;
        dgr += (st * 9);
    }
    return 0;
}