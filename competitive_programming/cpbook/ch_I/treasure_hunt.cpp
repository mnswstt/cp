#include <bits/stdc++.h>

int main() {
    int R, C;
    while (std::cin >> R >> C) {
        int area[R][C]{};
        std::string move_action[R]{};
        int c_move = 0;
        for (int i = 0; i < R; i++) {
            std::string action;
            std::cin >> action;
            move_action[i] = action;
        }
        for (int i = 0; i < R; i++) {
            for (int l = 0; l < R; l++) {
                printf("%s ", move_action[i]);
            }
                printf("\n");
        }

    }

    return 0;
}