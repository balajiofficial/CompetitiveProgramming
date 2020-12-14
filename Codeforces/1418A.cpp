#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll ceil_div(ll a, ll b) {
	return (a + b - 1)/b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll x, y, k;
		cin >> x >> y >> k;
		ll ans = ceil_div(k * y + k - 1, x - 1);
		ans += k;
		cout << ans << "\n";
	}
}
