#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[1000], b[1000];
		int c = 0, d =0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			c += a[i];
		}
		for(int i = 0; i < m; ++i) {
			cin >> b[i];
			d += b[i];
		}
		sort(a, a+n);
		sort(b, b+m, greater<int>());
		int ans = 0, k = min(n, m);
		for(int i = 0; i < k; ++i) {
			if (c > d) break;
			if (b[i] > a[i]) {
				c += b[i] - a[i];
				d += a[i] - b[i];
				++ans;
			}
		}
		if (c <= d) ans = -1;
		cout << ans << "\n";
	}
}
