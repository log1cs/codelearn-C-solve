#include<iostream>

using namespace std;

int main() {
    int n,c;
    int a[1000];
    c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0 && a[i] > 0) {
		c = c + a[i];
		}
	}
	cout << c;
    return 0;
}

