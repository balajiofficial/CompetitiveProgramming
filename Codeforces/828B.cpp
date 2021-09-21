#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char s[100][100];
	int a = 1e9, b = 1e9, c = -1e9, d = -1e9, count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> s[i][j];
			if (s[i][j] == 'B') {
				a = min(a, i);
				b = min(b, j);
				c = max(c, i);
				d = max(d, j);
				count++;
			}
		}
	}
	int res = max((c - a + 1), (d - b + 1));
	if (count == 0) {
		cout << 1 << "\n";
	}
	else if (res > n || res > m) {
		cout << -1 << "\n";
	}
	else {
		cout << res*res - count << "\n";
	}
}
