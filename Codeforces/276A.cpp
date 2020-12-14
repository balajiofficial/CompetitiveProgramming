#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	ll ans = LONG_MIN;
	while(n--) {
		ll f, t;
		cin >> f >> t;
		ans = max(ans, f - (max((ll)0, t - k)));
	}
	cout << ans << "\n";
}
