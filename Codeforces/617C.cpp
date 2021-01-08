#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll dist(ll a, ll b, ll c, ll d) {
	ll x = a - c;
	x *= x;
	ll y = b - d;
	y *= y;
	return x + y;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, x1, y1, x2, y2, ans = LLONG_MAX;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	vector<pair<ll, ll>> a;
	for(int i = 0; i < n; ++i) {
		ll b, c;
		cin >> b >> c;
		ll x = dist(b, c, x1, y1);
		ll y = dist(b, c, x2, y2);
		a.push_back(make_pair(x, y));
	}
	a.push_back(make_pair(0, 0));
	for(auto e : a) {
		ll r1 = e.first;
		ll r2 = 0;
		for(auto f : a) {
			if (f.first > r1) {
				r2 = max(r2, f.second);
			}
		}
		ans = min(ans, r1 + r2);
	}
	cout << ans << "\n";
}
