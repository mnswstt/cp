#include <iostream>

int main() {
    int x, y;
    while (std::cin >> x >> y) {
        if (x > 0 && y > 0) std::cout << "1";
        else if (x < 0 && y > 0) std::cout << "2";
        else if (x > 0 && y < 0) std::cout << "4";
        else std::cout << "3";
        std::cout << std::endl;
    }
    return 0;
}