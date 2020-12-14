#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> a;
		for(int i = 0; i < n * k; ++i) {
			ll b;
			cin >> b;
			a.push_back(b);
		}
		ll ans= 0;
		for(int i = 0; i < k; ++i) {
			for(int j = 0; j < n/2; ++j) {
				a.pop_back();
			}
			ans += a.back();
			a.pop_back();
		}
		cout << ans << "\n";
	}
}
