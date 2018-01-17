#include <iostream>
using namespace std;

int selectionsort(int a[], int n) {
	int count = 0;
	int minj;
	for (int i = 0; i < n; i++) {
		minj = i;
		for (int j = i; j < n; j++) {
			if(a[j] < a[minj]) {
				minj = j;
			}
		}
		swap(a[i], a[minj]);
		if (a[i] != a[minj]) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	int a[100] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int c = selectionsort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) {
			cout << ' ';
		}
	}
	cout << endl << c << endl;
	return 0;
}