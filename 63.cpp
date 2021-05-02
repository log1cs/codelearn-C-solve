#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "asdasdasdasdasdasda: " << a[0] + a[n-1];
    return 0;
}

