#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll ans = 0;
		ll i = n/2;
		while(n > 1) {
			ans += (4 * n - 4) * i;
			n -= 2;
			--i;
		}
		cout << ans << "\n";
	}
}
