#include<iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int c = 0;
    cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] <= 10) {
			cout << a[i] << " ";
		}
	}
    return 0;
}

