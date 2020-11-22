#include <bits/stdc++.h>

int main() {
    std::string a, b, c;
    while (std::cin >> a >> b >> c) {
        if (a[0] == 'N') { // From north
            if (b[0] == 'S') {
                if (c[0] == 'W') std::cout << "YES";
                else std::cout << "NO";
            } else if (b[0] == 'E') {
                if (c[0] == 'S' || c[0] == 'W') std::cout << "YES";
                else std::cout << "NO";
            } else if (b[0] == 'W') {
                std::cout << "NO";
            }
        } else if (a[0] == 'S') { // From south
            if (b[0] == 'N') {
                if (c[0] == 'E') std::cout << "YES";
                else std::cout << "NO";
            } else if (b[0] == 'E') {
                std::cout << "NO";
            } else if (b[0] == 'W') {
                if (c[0] == 'N' || c[0] == 'E') std::cout << "YES";
                else std::cout << "NO";
            }
        } else if (a[0] == 'E') { // From east
            if (b[0] == 'N') {
                std::cout << "NO";
            } else if (b[0] == 'S') {
                if (c[0] == 'W' || c[0] == 'N') std::cout << "YES";
                else std::cout << "NO";
            } else if (b[0] == 'W') {
                if (c[0] == 'N') std::cout << "YES";
                else std::cout << "NO";
            }
        } else if (a[0] == 'W') { // From west
            if (b[0] == 'N') {
                if (c[0] == 'E' || c[0] == 'S') std::cout << "YES";
                else std::cout << "NO";
            } else if (b[0] == 'S') {
                std::cout << "NO";
            } else if (b[0] == 'E') {
                if (c[0] == 'S') std::cout << "YES";
                else std::cout << "NO";
            }
        } std::cout << std::endl;
    }
    return 0;
}