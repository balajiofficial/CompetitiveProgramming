#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		ll ans = 0;
		if (n < k) {
			cout << n << "\n";
			continue;
		}
		while(n > 0) {
			if (n % k == 0) {
				++ans;
				n /= k;
			} else {
				ans += n - n/k * k;
				n = n/k * k;
			}
		}
		cout << ans << "\n";
	}
}
