#include <cstdio>
#include <algorithm>
using namespace std;

int binary_search(int A[], int key, int N) {
    int left = 0, right = N, mid;

    while (left < right) {
        mid = (left + right) / 2;

        if (A[mid] == key) {
            return 1;
        } else if (A[mid] > key) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return 0;
}

int main() {
    int n, S[100000 + 1], q, t, res = 0, a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }
    sort(S, S+n);

    scanf("%d", &q);

    for (int j = 0; j < q; j++) {
        scanf("%d", &t);
        if (binary_search(S, t, n)) {
            res += 1;
        }
    }

    printf("%d\n", res);
    return 0;
}



