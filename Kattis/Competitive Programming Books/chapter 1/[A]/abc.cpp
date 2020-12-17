#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z;
    while (cin >> x >> y >> z) {
        int arr[]{x, y, z}; sort(arr, arr + 3);
        string order_by; cin >> order_by;

        // 0
        if (order_by[0] == 'A') {
            cout << arr[0] << " ";
        } else if (order_by[0] == 'B') {
            cout << arr[1] << " ";
        } else {
            cout << arr[2] << " ";
        }
        // 1
        if (order_by[1] == 'A') {
            cout << arr[0] << " ";
        } else if (order_by[1] == 'B') {
            cout << arr[1] << " ";
        } else {
            cout << arr[2] << " ";
        }
        // 2
        if (order_by[2] == 'A') {
            cout << arr[0];
        } else if (order_by[2] == 'B') {
            cout << arr[1];
        } else {
            cout << arr[2];
        }
        cout << endl;
    }

    return 0;
}