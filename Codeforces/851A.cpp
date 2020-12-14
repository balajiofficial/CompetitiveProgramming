#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n, k, t;
	cin >> n >> k >> t;
	ll ans = 0;
	if (t <= k)
		ans += t;
	else if (t < n && t >= k) {
		ans += k;
	} else {
		ans += n + k - t;
	}
	cout << ans << "\n";
}
