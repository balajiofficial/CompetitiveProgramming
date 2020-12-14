#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c, d;
		cin >> a >>b >>c >>d;
		ll ans = abs(a - c) + abs(b - d);
		if (a != c && b != d)
			ans += 2;
		cout << ans << "\n";
	}
}
