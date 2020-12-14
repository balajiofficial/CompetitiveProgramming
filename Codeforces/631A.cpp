#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[1000], b[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	ll ans = 0;
	for(int i = 0; i < n; ++i) {
		ll a1 = 0, a2 = 0;
		for(int j = i; j < n; ++j) {
			a1 |= a[j];
			a2 |= b[j];
			ans = max(ans, a1 + a2);
		}
	}
	cout << ans << "\n";
}
