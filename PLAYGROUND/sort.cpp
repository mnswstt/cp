#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class Interval {
public:
    int start, end;
};

bool compareInterval(Interval i1, Interval i2) { return (i1.start < i2.start); }

int main() {
    Interval arr[]{{1, 9}, {3, 5}, {4, 7}, {0, 2}};
    vi vectorOfInt{5, 4, 3, 2, 1, -1};
    sort(vectorOfInt.begin(), vectorOfInt.end());
    cout << "Sorted vector of int: ";
    for (int n:vectorOfInt) {
        cout << n << " ";
    } cout << endl;
    int n = sizeof(arr) / sizeof(Interval);
    sort(arr, arr + n, compareInterval);
    cout << "Intervals sorted by start time: \n";
    for (int i = 0; i < n; i ++) { 
        cout << "[" << arr[i].start << ", " << arr[i].end << "]";
        if (i < n - 1) cout << ", ";
    }

    return 0;
}