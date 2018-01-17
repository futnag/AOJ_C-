#include <iostream>
using namespace std;


int bubblesort(int data[], int n) {
	bool flag = 1;
	int count = 0;
	while(flag) {
		flag = 0;
		for (int i = n - 1; i > 0; i--) {
			if (data[i] < data[i-1]) {
				count++;
				swap(data[i],data[i-1]);
				flag = 1;
			}
		}
	}
	return count;
}


int main() {
	int n;
	cin >> n;
	int data[100];
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}

	int c;
	c = bubblesort(data, n);
	for (int j = 0; j < n; j++) {
		cout << data[j];
		if (j < n-1) cout << " ";
	}
	cout << endl << c << endl;

	return 0;
}