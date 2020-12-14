#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	const int mxN = 2e5;
	ll a[mxN];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll res =0;
	for(int i = 0; i< n; ++i) {
		ll ans = 0;
		if (res == 0) {
			ans += a[i]/m;
			res += m - a[i] % m;
		} else {
			if (a[i] <= res) {
				res -= a[i];
				if (res == 0)
					++ans;
			} else {
				a[i] -= res;
				res =0;
				++ans;
				ans += a[i]/m;
				res += m - a[i] % m;
			}
		}
		cout << ans << " ";
	}
	cout << "\n";
}
