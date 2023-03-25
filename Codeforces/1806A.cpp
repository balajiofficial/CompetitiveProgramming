#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll ans = abs(b - d);
		if (c>a+ans) {
			ans = -1;
		} else {
			ans += abs(a+ans-c);
		}
		if (b > d) {
			ans = -1;
		}
		cout << ans << "\n";
	}
}
