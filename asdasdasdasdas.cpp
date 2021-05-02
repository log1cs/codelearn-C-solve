#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (i = 0; i < n; i++) {
        if (max > a[i]){
            max = a[i];
    }
    }
    cout << max    
    return 0;-
