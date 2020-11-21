#include <iostream>

using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, m; cin >> n >> m;
        cout << (n / 3) * (m / 3);
        if (tc > 0) cout << endl;
    }

    return 0e0;
}