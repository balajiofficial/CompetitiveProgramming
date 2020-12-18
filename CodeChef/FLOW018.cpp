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
		ll ans = 1;
		for(ll i = 1; i <= n; ++i) {
			ans *= i;
		}
		cout << ans << "\n";
	}
}
