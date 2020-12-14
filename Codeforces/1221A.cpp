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
		ll ans= 0;
		for(int i = 0; i < n; ++i) {
			ll a;
			cin >> a;
			if (a <= 2048)
			ans += a;
		}
		if (ans >= 2048) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
