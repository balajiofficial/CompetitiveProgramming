#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c, r;
		cin >> a >> b >> c >> r;
		ll l = c - r;
		r = c + r;
		if (a > b)
			swap(a, b);
		ll aa = max(a, l);
		ll bb = min(b, r);
		ll ans = max(bb - aa, (ll)0);
		cout << b - a - ans << "\n";
	}
}
