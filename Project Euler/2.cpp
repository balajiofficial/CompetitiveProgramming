#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n = 600851475143, ans = 0;
	for(ll i = 2; i * i < n; ++i) {
		if (n % i == 0) {
			bool ok = 1;
			for(ll j = 2; j < max(i, n/i); ++j) {
				if (i % j == 0 || n/i % j == 0) {
					ok = 0;
					break;
				}
			}
			if (ok) {
				ans = i;
				cout << i << "\n";
			}
		}
	}
	cout << ans << "\n";
}
