#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		if (x> y) {
			swap(x, y);
		}
		ll mon = min(a * 2, b);
		ll l = min(x, y);
		ll ans = 0;
		ans += l * mon;
		x -= l;
		y -= l;
		cout << ans + y * a << "\n";
	}
}
