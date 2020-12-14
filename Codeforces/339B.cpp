#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	ll a[100000];
	for(int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	ll ans = 0;
	for(int i = 0; i < m; ++i) {
		if (i ==  0) {
			ans += a[i] - 1;
		} else {
			if (a[i] < a[i - 1]) {
				ans += n - a[i -1] + a[i];
			} else {
				ans += a[i] - a[i - 1];
			}
		}
	}
	cout << ans << "\n";
}
