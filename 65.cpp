#include<iostream>

using namespace std;

int main() {
    int n, k;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "dcm nhap k nhanh";
    cin >> k;
    int c = 0;
    for (int i = 0; i < n; i++) {
    	if (arr[i] == k) {
    		c = c + 1;
		}
	}
	cout << c;
    return 0;
}

