#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> a;
	for(int i = 0; i < m; ++i) {
		ll b, c;
		cin >> b >> c;
		a.push_back(make_pair(c, b));
	}
	sort(a.begin(), a.end(), greater<pair<int, int>>());
	ll ans = 0;
	for(int i=  0; i < m; ++i) {
		if (a[i].second > n) {
			ans += a[i].first * n;
			n = 0;
		} else {
			ans += a[i].first * a[i].second;
			n -= a[i].second;
		}
	}
	cout << ans << "\n";
}
