#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll ans = 0, n;
	cin >> n;
	while(n--) {
		ll a, b;
		cin >> a >> b;
		ans = max(ans, a + b);
	}
	cout << ans << "\n";
}
