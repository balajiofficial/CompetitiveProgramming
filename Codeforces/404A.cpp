#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	char a[300][300];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	char c;
	bool ok = 0;
	char res2 = '1';
	for(int i= 0; i < n; ++i) {
		if (res2 == '1') {
			res2 = a[i][i];
		}
		if (a[i][i] != a[i][n - i - 1] || a[i][i] != res2) {
			ok = 1;
		}
		c = a[i][i];
		a[i][i] = '-';
		a[i][n - i - 1] = '-';
	}
	if (ok) {
		cout << "NO\n";
		return 0;
	}
	char res = '1';
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if (a[i][j] == '-') continue;
			if (a[i][j] == c) {
				ok = 1;
			}
			if (res == '1') {
				res = a[i][j];
			}
			if (a[i][j] != res) {
				ok = 1;
			}
		}
		if (ok) break;
	}
	if (ok) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
}
