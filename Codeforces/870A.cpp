#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, c = INT_MAX, d = INT_MAX;
	cin >> n >> m;
	int a[9], b[9];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		c = min(c, a[i]);
	}
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
		d = min(d, b[i]);
	}
	int ans= INT_MAX;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if (a[i] == b[j]) {
				ans = min(ans, a[i]);
			}
		}
	}
	if (ans != INT_MAX) {
		cout << ans << "\n";
	} else {
		cout << min(c, d) << max(c, d) << "\n";
	}
}
