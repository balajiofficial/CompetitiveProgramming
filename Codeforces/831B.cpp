#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a, b;
	cin >> a >> b;
	string c;
	cin >> c;
	for(int i = 0; i < c.size(); ++i) {
		char d;
		if (c[i] >= '0' && c[i] <= '9') {
			cout << c[i];
			continue;
		}
		if (c[i] >= 'A' && c[i] <= 'Z') {
			d = tolower(c[i]);
		} else {
			d = c[i];
		}
		char e;
		for(int i= 0; i < a.size(); ++i) {
			if (a[i] == d) {
				e = b[i];
				break;
			}
		}
		if (c[i] >= 'A' && c[i] <= 'Z')
			e = toupper(e);
		cout << e;
	}
	cout << "\n";
}
