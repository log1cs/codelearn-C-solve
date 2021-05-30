#include <iostream>

using namespace std;

double circumference(double r) {
	double pi = 3.14;
	return pi * r * 2;
}

int main() {
	double r;
	cin >> r;
	cout << circumference(r);
	return 0;
}

