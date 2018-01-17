#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    //配列なし
    int n, d, minv, maxv = -2000000000;
    cin >> n;
    cin >> minv;
    for (int i = 1; i < n; i++) {
        cin >> d;
        maxv = max(maxv, d - minv);
        minv = min(minv, d);
    }
    cout << maxv << endl;

    //配列利用
    // int n, minv, maxv = -2000000000;
    // cin >> n;
    // int data[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> data[i];
    // }
    //
    // minv = data[0];
    // for (int j = 1; j < n; j++) {
    //     maxv = max(maxv, data[j] - minv);
    //     minv = min(minv, data[j]);
    // }
    // cout << maxv << endl;

    //O(n^2)
    // int data[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> data[i];
    // }
    // int max = -1000000000;
    // for (int j = 0; j < n-1; j++) {
    //     for (int k = j+1; k < n; k++) {
    //         if (data[k] - data[j] > max) {
    //             max = data[k] - data[j];
    //         }
    //     }
    // }
    // cout << max << endl;
    return 0;
}
