#include<iostream>

using namespace std;

int main() {
    string s;
    char e;
    cin >> s;
    cin >> e;
    int def = 0;
    for (int i = 0; i < s.size(); i++) {
    	if (s[i] == e) {
    		def = def + 1;
		}
	} 
	cout << def;
    return 0;
}

