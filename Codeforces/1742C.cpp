#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		char a[8][8];
		bool p = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> a[i][j];
			}
		}
		// Check for Rows
		for (int i = 0; i < 8; i++) {
			bool o = 1;
			for (int j = 0; j < 8; j++) {
				if (a[i][j] != a[i][0]) {
					o = 0;
					break;
				}
			}
			if (o == 1 && a[i][0] == 'R') {
				cout << a[i][0] << "\n";
				p = 1;
				break;
			}
		}
		// Check for Columns
		for (int i = 0; i < 8; i++) {
			bool o = 1;
			for (int j = 0; j < 8; j++) {
				if (a[j][i] != a[0][i]) {
					o = 0;
					break;
				}
			}
			if (o == 1 && p == 0 && a[0][i] == 'B') {
				cout << a[0][i] << "\n";
				break;
			}
		}
	}
}

