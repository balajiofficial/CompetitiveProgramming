#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		bool a[101];
		fill(a, a+101, 1);
		int x, y, m;
		cin >> m >> x >> y;
		while(m--) {
			int b;
			cin >> b;
			for(int i = b - x * y; i <= b + x * y; ++i) {
				if (i >= 1 && i <= 100) {
					a[i] = 0;
				}
			}
		}
		int ans = 0;
		for(int i = 1; i <= 100; ++i) {
			ans += a[i];
		}
		cout << ans << "\n";
	}
}
