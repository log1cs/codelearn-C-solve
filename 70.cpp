#include<iostream>

using namespace std;

int main() {
	int arr[100][100];
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 5 == 0) {
				sum += arr[i][j];
			}
		}
	}
	
	cout << sum;

	return 0;
}
