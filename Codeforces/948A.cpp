#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, c;
	cin >> r >> c;
	char a[500][500];
	for(int i = 0; i < r; ++i) {
		for(int j = 0; j < c; ++j) {
			cin >> a[i][j];
			if (a[i][j] == '.')
				a[i][j] = 'D';
		}
	}
	bool ok = 0;
	for(int i = 0; i < r; ++i) {
		for(int j = 0; j < c; ++j) {
			if (a[i][j] == 'S') {
				if (j > 0 && a[i][j - 1] == 'W') {
					ok = 1;
				}
				if (j < c - 1 && a[i][j + 1] == 'W') {
					ok = 1;
				}
				if (i > 0 && a[i - 1][j] == 'W') {
					ok = 1;
				}
				if (i < r  - 1 && a[i + 1][j] == 'W')
					ok = 1;
			}
		}
		if (ok) {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
	for(int i = 0; i < r; ++i) {
		for(int j = 0; j < c; ++j) {
			cout << a[i][j];
		}
		cout << "\n";
	}
}
