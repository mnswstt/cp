#include <bits/stdc++.h>

void sort_roll(int* st, int* nd) {
    if (*st != *nd) {
        int min = (*st > *nd)? *nd:*st;
        int max = (*st > *nd)? *st:*nd;
        *st = max;
        *nd = min;
    }
}

int main() {
    int a0, a1;
    int b0, b1;
    std::cin >> a0 >> a1 >> b0 >> b1;
    while (a0 || a1 || b0 || b1) {
        int a{}, b{};
        sort_roll(&a0, &a1); sort_roll(&b0, &b1);
        std::stringstream a_value(std::to_string(a0) + std::to_string(a1));
        std::stringstream b_value(std::to_string(b0) + std::to_string(b1));
        a_value >> a; b_value >> b;
        using namespace std;
        if (a == 21) {
            if (b == 21) cout << "Tie.";
            else cout << "Player 1 wins.";
        } else if (b == 21) {
            cout << "Player 2 wins.";
        } else if (a0 == a1 && b0 == b1) {
            if (a > b) cout << "Player 1 wins.";
            else if (b > a) cout << "Player 2 wins.";
            else cout << "Tie.";
        } else if (a0 == a1) {
            cout << "Player 1 wins.";
        } else if (b0 == b1) {
            cout << "Player 2 wins.";
        } else if (a > b) {
            cout << "Player 1 wins.";
        } else if (b > a) {
            cout << "Player 2 wins.";
        } else if (a == b) {
            cout << "Tie.";
        } cout << endl;
        std::cin >> a0 >> a1 >> b0 >> b1;
    }

}