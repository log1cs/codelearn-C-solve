#include<iostream>

using namespace std;

int main() {
    int a[100][100];
    int b,c;
    cin >> b >> c;
    for (int i = 0; i < b; i++) {
    	for (int p = 0; p < c; p++) {
    		cin >> a[i][p];
		}
	}
		int s = 0;
	for (int i = 0; i < b; i++) {
		for (int p = 0; p < c; p++) {
			s = s + a[i][p];
		}
	}
	cout << s;
    return 0;
}

