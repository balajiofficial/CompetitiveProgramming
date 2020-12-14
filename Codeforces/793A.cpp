#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	ll a[1000000], low = LONG_MAX;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i > 0) {
			if ((a[i] - a[i -1]) % k != 0) {
				ok = 1;
			}
		}
		low = min(low, a[i]);
	}
	if (ok) {
		cout << -1 << "\n";
		return 0;
	}
	ll ans =0;
	for(int i = 0; i < n; ++i) {
		ans += (a[i] - low)/k;
	}
	cout << ans << "\n";
}
