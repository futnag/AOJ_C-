#include <cstdio>
using namespace std;

int linearSearch(int A[], int n, int key) {
    int i = 0;
    A[n] = key;

    while (A[i] != key) i++;
    return i != n;
}

int main() {
    int i, n, A[10000+1], q, key, sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &key);
        if (linearSearch(A, n, key)) sum++;
    }

    printf("%d\n", sum);

    return 0;
}









// int main() {
//     int n, q;

//     cin >> n;
//     int s[n];

//     for (int i = 0; i < n; i++) {
//         cin >> s[i];
//     }

//     cin >> q;
//     int t[q];

//     for (int j = 0; j < q; j++) {
//         cin >> t[j];
//     }

//     int res = 0;

//     for (int i = 0; i < q; i++) {
//         for (int j = 0; j < n; j++) {
//             if (t[i] == s[j]) {
//                 res++;
//                 break;
//             }
//         }
//     }

//     cout << res << endl;

//     return 0;
// }


