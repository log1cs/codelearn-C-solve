#include<iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
    return 0;
}

