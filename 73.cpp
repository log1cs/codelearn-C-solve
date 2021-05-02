#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int def = -1;
    for (int i = 0; i < s.size(); i++) {
        if (c == s[i]) {
        	   // Goi lenh break (da tim thay ki tu dau tien xuat hien)
        def = i;
        break;
    }
}
    cout << def;
    return 0;
}
