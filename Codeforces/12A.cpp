#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a[3], b[3];
	for(int i = 0;i < 3; ++i) {
		cin >> a[i];
		b[i] = a[i];
		reverse(b[i].begin(), b[i].end());
	}
	bool ok = 1;
	reverse(b, b+3);
	for(int i =0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			if (a[i][j] != b[i][j])
				ok = 0;
		}
	}
	cout << (ok ? "YES":"NO") << "\n";
}
