#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k, d;
		cin >> n >> k >> d;
		ll ans= 0;
		for(int i = 0; i < n; ++i) {
			ll a;
			cin >> a;
			ans += a;
		}
		cout << min(ans/k, d) << "\n";
	}
}
