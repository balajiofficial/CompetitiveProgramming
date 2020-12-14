#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	map<ll, ll> l;
	for(ll i = 0; i < n; ++i) {
		ll x, z;
		cin >> x >> z;
		l[x] = z;
	}
	vector<ll> a, b;
	for(auto z : l) {
		ll e, f;
		e = z.first;
		f = z.second;
		if (e < 0) {
			a.push_back(f);
		} else {
			b.push_back(f);
		}
	}
	reverse(a.begin(), a.end());
	if (a.size() == b.size()) {
		ll ans = 0;
		for(ll i = 0; i < a.size(); ++i) {
			ans += a[i] + b[i];
		}
		cout << ans << "\n";
	} else {
		ll ans = 0;
		ll k = min(b.size(), a.size()) + 1;
		for(ll i = 0; i < k; ++i) {
			if (i != k - 1) {
				ans += a[i] + b[i];
			} else {
				ans += (b.size() > a.size() ? b[i] : a[i]);
			}
		}
		cout << ans << "\n";
	}
}
