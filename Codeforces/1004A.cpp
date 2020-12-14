#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, d;
	cin >> n >> d;
	ll a[100];
	vector<ll> b;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		b.push_back(a[i] - d);
		b.push_back(a[i] + d);
	}
	for(int i = 0; i < b.size(); ++i) {
		ll ans = LLONG_MAX;
		for(int j = 0; j < n; ++j) {
			ans = min(ans, abs(b[i] - a[j]));
		}
		if (ans != d) {
			b[i] = LLONG_MIN;
		}
	}
	set<ll> ans;
	for(int i = 0; i < b.size(); ++i) {
		if (b[i] != LLONG_MIN) {
			ans.insert(b[i]);
		}
	}
	cout << ans.size() << "\n";
}
