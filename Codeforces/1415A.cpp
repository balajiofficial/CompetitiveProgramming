#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, m, r, c;
		cin >> n >> m >> r >> c;
		ll ans = 0;
		ans = max(ans, r + c - 2);
		ans = max(ans, (n - r) + (m - c));
		ans = max(ans, r - 1 + (m - c));
		ans = max(ans, (n - r) + c - 1);
		cout << ans << "\n";
	}
}
