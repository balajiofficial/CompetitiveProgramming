#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll ans = LONG_MIN;
	for(int i= 0; i < n; ++i) {
		long double a;
		cin >> a;
		if (floor(sqrt(a)) * floor(sqrt(a)) != a) {
			ans = max(ans, (ll)a);
		}
	}
	cout << ans << "\n";
}
