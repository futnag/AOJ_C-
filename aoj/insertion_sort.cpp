#include <iostream>
using namespace std;

void trace(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i < n-1) cout << " ";
	}
	cout << endl;
}

void insertionsort(int a[], int n) {
	int v, j;
	for (int i = 0; i < n; i++) {
		v = a[i];
		j = i - 1;
		while ( j >= 0 and a[j] > v) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
		trace(a, n);
	}
}

int main() {
	int n;
	int a[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	insertionsort(a, n);
	return 0;
}