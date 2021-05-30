#include <iostream>

using namespace std;

void sortArray(int arr[1000], int n) {
	for(int i = 0;i < n; i++) {
		for(int j = 1 + i;j < n; j++) {
			if(arr[i] < arr [j]) {
			int cache = arr[i];
			 	arr[i] = arr[j];
				arr[j] = cache;				
			}
		}
	}
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sortArray(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

